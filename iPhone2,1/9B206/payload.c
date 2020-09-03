#include <stdio.h>

#define BASE_ADDR 0x4FF00000
#define TARGET_JUMPADDR 0x44000000
#define PRINTF (0x21928+0x1)
#define BCOPY (0x21C70)
#define NETTOYEUR (0x2D67C)
#define PREPARE_AND_JUMP (0x2D64D)

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
    
    bcopy((void*)0x4FF00000,(void*)TARGET_JUMPADDR,(size_t)0x2B000);
    
    nettoyeur();
    
    /* iBoot Patches - ramdiskG */
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x818) = 0x20002100; // ignore boot-partition
    *(unsigned int *)(TARGET_JUMPADDR + 0x81c) = 0xF10D2000; // ignore boot-partition
    *(unsigned int *)(TARGET_JUMPADDR + 0xf884) = 0x60182000; // RSA Checks
    *(unsigned int *)(TARGET_JUMPADDR + 0x24e14) = 0x6D00762D; // boot-args="-v"
    *(unsigned int *)(TARGET_JUMPADDR + 0x28cac) = 0x40000000; // ticket=loadaddress
    
    /* ---------------------------------------------------- */
    
    printf("Jumping into image at %p\n",TARGET_JUMPADDR);
    
    prepare_and_jump();
    
    return 0;
}
