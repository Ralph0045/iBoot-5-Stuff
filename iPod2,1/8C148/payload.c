#include <stdio.h>

#define BASE_ADDR 0x0ff00000
#define TARGET_JUMPADDR 0x0B000000
#define PRINTF (0x1CAAC+0x1)
#define BCOPY (0x1cc98)
#define NETTOYEUR (0x28428)
#define PREPARE_AND_JUMP (0x283D9)

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
    
    bcopy((void*)0xFF00000,(void*)TARGET_JUMPADDR,(size_t)0x27000);

    nettoyeur();
    
    /* iBoot Patches - ramdiskG */
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x94c4) = 0x47702000; // Signature checks patch
    *(unsigned int *)(TARGET_JUMPADDR + 0x12aec) = 0x2000E036; // Signature checks patch
    *(unsigned int *)(TARGET_JUMPADDR + 0x12af0) = 0xE0332000; // Signature checks patch
    *(unsigned int *)(TARGET_JUMPADDR + 0x1ee68) = 0x6D00762D; // nvram boot-args="-v"
    *(unsigned int *)(TARGET_JUMPADDR + 0xa0f0) = 0x2C006813; // Inject boot args
    
    /* ---------------------------------------------------- */
    
    printf("Jumping into image at %p\n",TARGET_JUMPADDR);
    
    prepare_and_jump();
    
    return 0;
}
