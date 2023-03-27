#include <stdio.h>

#define BASE_ADDR 0x5ff00000
#define TARGET_JUMPADDR 0x44000000
#define PRINTF (0x28B2C+0x1)
#define BCOPY (0x28d4c)
#define CLEAR_INSN_CACHE (0x17090)
#define NETTOYEUR (0x378A8)
#define PREPARE_AND_JUMP (0x37879)

typedef void (*printf_t)(const char *fmt, ...);
typedef void (*bcopy_t)(const void *src, void *dest, size_t n);
typedef void (*clear_insn_cache_t)(void);
typedef void (*nettoyeur_t)(void);
typedef void (*prepare_and_jump_t)(void);

int main() {
    
    printf_t printf = (printf_t)(BASE_ADDR+PRINTF);
    bcopy_t bcopy = (bcopy_t)(BASE_ADDR+BCOPY);
    clear_insn_cache_t clear_insn_cache = (clear_insn_cache_t)(BASE_ADDR+CLEAR_INSN_CACHE);
    nettoyeur_t nettoyeur = (nettoyeur_t)(BASE_ADDR+NETTOYEUR);
    prepare_and_jump_t prepare_and_jump = (prepare_and_jump_t)(BASE_ADDR+PREPARE_AND_JUMP);
    
    clear_insn_cache();
    
    printf("Hacked\n");
    
    bcopy((void*)0x5FF00000,(void*)TARGET_JUMPADDR,(size_t)0x35000);

    nettoyeur();
    
    /* iBoot Patches - ramdiskG */
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x120dc) = 0x20002000; // Signature checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x1216c) = 0x200049B9; // Signature checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x12170) = 0x46042000; // Signature checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x121b0) = 0x20002000; // Signature checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x121d4) = 0x20002000; // Signature checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x1a7e0) = 0x20002000; // Signature checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x12d90) = 0x20012020; // debug-enabled
    *(unsigned int *)(TARGET_JUMPADDR + 0x12d94) = 0xB1102001; // debug-enabled
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d9c4) = 0x6D00762D; // nvram boot-args="-v"
    *(unsigned int *)(TARGET_JUMPADDR + 0x12a3c) = 0x290107A8; // inject boot-args
    *(unsigned int *)(TARGET_JUMPADDR + 0x29880) = 0x746F; // ignore boot-partition variable
    
    /* ---------------------------------------------------- */
    
    printf("Jumping into image at %p\n",TARGET_JUMPADDR);
    
    prepare_and_jump();
    
    return 0;
}
