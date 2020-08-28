#include <stdio.h>

#define BASE_ADDR 0x5ff00000
#define TARGET_JUMPADDR 0x44000000
#define PRINTF (0x2342c+0x1)
#define BCOPY (0x23774)
#define NETTOYEUR (0x3086C)
#define PREPARE_AND_JUMP (0x307FD)

typedef void (*printf_t)(const char *fmt, ...);
typedef void (*bcopy_t)(const void *src, void *dest, size_t n);
typedef void (*nettoyeur_t)(void);
typedef void (*prepare_and_jump_t)(void);

int main() {
    
    printf_t printf = (printf_t)(BASE_ADDR+PRINTF);
    bcopy_t bcopy = (bcopy_t)(BASE_ADDR+BCOPY);
    nettoyeur_t nettoyeur = (nettoyeur_t)(BASE_ADDR+NETTOYEUR);
    prepare_and_jump_t prepare_and_jump = (prepare_and_jump_t)(BASE_ADDR+PREPARE_AND_JUMP);
    
    printf("Hacked\n");
    
    bcopy((void*)0x5FF00000,(void*)TARGET_JUMPADDR,(size_t)0x2E000);
    
    nettoyeur();
    
    /* iBoot Patches - ramdiskG */
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x00818) = 0x20002100;
    *(unsigned int *)(TARGET_JUMPADDR + 0x0081c) = 0xf10d2000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x008e0) = 0x20002000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x110d4) = 0x60182000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x12344) = 0x4995fbf7;
    *(unsigned int *)(TARGET_JUMPADDR + 0x274a0) = 0x00762d00;
    
    /* ---------------------------------------------------- */
    
    printf("Jumping into image at %p\n",TARGET_JUMPADDR);
    
    prepare_and_jump();
    
    return 0;
}
