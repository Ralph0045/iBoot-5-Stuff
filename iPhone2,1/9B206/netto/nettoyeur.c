#include <stdio.h>

#define TARGET_JUMPADDR 0x44000000

int
main(void)
{
    
    unsigned i;
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a0cc) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a0d8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a0dc) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a0e0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a1d0) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a1dc) = 0x11;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a2bc) = 0x4FF2A2BC;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a2c0) = 0x4FF2A2BC;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a300) = 0x4FF2A300;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a304) = 0x4FF2A300;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a308) = 0x4FF2A308;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a30c) = 0x4FF2A308;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a314) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a318) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a31c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a330) = 0x4FF2A350;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a340) = 0x4FF2A340;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a344) = 0x4FF2A340;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a348) = 0x4FF2A348;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a34c) = 0x4FF2A348;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a364) = 0x02;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a36c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a370) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a374) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a378) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a37c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a380) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a384) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a388) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a38c) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a390) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a3b4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a3b8) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2a3e8) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2ad80) = 0x4000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2ad84) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2ad88) = 0x1000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2ae40) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2ae60) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2afc4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2afe0) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2afe4) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2afec) = 0x00;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2affc) = 0x00;
    
    return 0;
}
