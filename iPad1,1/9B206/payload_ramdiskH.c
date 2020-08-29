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
    
    /* iBoot Patches - ramdiskH */
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x012A8) = 0x20009902; // boot-target=0
    *(unsigned int *)(TARGET_JUMPADDR + 0x110d4) = 0x60182000; // RSA checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x245bc) = 0x66003000; // boot-partition=0
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d004) = 0x5FF01249; // boot-command=upgrade
    
    /* ---------------------------------------------------- */
    
    printf("Jumping into image at %p\n",TARGET_JUMPADDR);
    
    prepare_and_jump();
    
    return 0;
}
