#include <stdio.h>

#define TARGET_JUMPADDR 0x84000000

int
main(void)
{
    
    unsigned i;
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x16254) = 0xFB50F7FF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x376bc) = 0x9FF18C6D;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39308) = 0xE000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3931c) = 0xE000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39358) = 0xE000001;
    *(unsigned int *)(TARGET_JUMPADDR + 0x393f8) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39400) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39404) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39408) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39414) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39418) = 0x01;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3941c) = 0x9FF3941C;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39420) = 0x9FF3941C;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39460) = 0x9FF39460;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39464) = 0x9FF39460;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39468) = 0x9FF39468;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3946c) = 0x9FF39468;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39544) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39548) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3954c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39560) = 0x9FF39580;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39570) = 0x9FF39570;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39574) = 0x9FF39570;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39578) = 0x9FF39578;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3957c) = 0x9FF39578;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39594) = 0x02;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3959c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395a0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395a4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395a8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395ac) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395b0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395b4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395b8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395bc) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395c0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395e4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x395e8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39618) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39660) = 0x4000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39664) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39668) = 0x1000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x396e8) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39740) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39760) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x397f0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39868) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39874) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39878) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39880) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39884) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3988c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39890) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39898) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x3989c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x398a4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x398a8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x398b0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x398b4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x398f8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x398fc) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39904) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39908) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a00) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a04) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a0c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a10) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a18) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a1c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a24) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x39a28) = 0x00;

    return 0;
}
