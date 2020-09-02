#include <stdio.h>

#define BASE_ADDR 0x9FF00000
#define TARGET_JUMPADDR 0x84000000
#define PRINTF (0x2ca8c+0x1)
#define BCOPY (0x2cdd4)
#define NETTOYEUR (0x3CACC)
#define PREPARE_AND_JUMP (0x3CA9D)

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
    
    bcopy((void*)0x9FF00000,(void*)TARGET_JUMPADDR,(size_t)0x3A000);
    
    nettoyeur();
    
    /* iBoot Patches - ramdiskG */
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x16254) = 0x60182000; // RSA checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x174c4) = 0x4995FAC9;
    *(unsigned int *)(TARGET_JUMPADDR + 0x31e1c) = 0x762D00;   // boot-args="-v"
    *(unsigned int *)(TARGET_JUMPADDR + 0x376bc) = 0x80000000; // ticket=loadaddr
    
    /* ---------------------------------------------------- */
    
    printf("Jumping into image at %p\n",TARGET_JUMPADDR);
    
    prepare_and_jump();
    
    return 0;
}
