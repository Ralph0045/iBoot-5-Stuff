#include <stdio.h>

#define TARGET_JUMPADDR 0x44000000

int
main(void)
{
    
    unsigned i;
    
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d118) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d11c) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d12c) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d128) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d130) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d1b8) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d1bc) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d1cc) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d1d0) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d280) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d28c) = 0x00000011;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d290) = 0x5FF2D290;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d294) = 0x5FF2D290;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2d0) = 0x5FF2D2D0;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2d4) = 0x5FF2D2D0;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2d8) = 0x5FF2D2D8;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2dc) = 0x5FF2D2D8;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2e4) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2e8) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d2ec) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d300) = 0x5FF2D320;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d310) = 0x5FF2D310;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d314) = 0x5FF2D310;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d318) = 0x5FF2D318;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d31c) = 0x5FF2D318;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d334) = 0x00000002;
    for (i = 0; i <= 0x2d388 - 0x2d33c; i += 4) {
        *(unsigned int *)(TARGET_JUMPADDR + 0x2d33c + i) = 0x00000000;
    }
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d3b8) = 0xFFFFFFFF;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d370) = 0x00004000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d374) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d378) = 0x01000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d900) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d920) = 0x00000000;
    for (i = 0; i <= 0x2dbd0 - 0x2da80; i += 4) {
        *(unsigned int *)(TARGET_JUMPADDR + 0x2da80 + i) = 0x00000000;
    }
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d370) = 0x00000000;
    *(unsigned int *)(TARGET_JUMPADDR + 0x2d378) = 0x00000000;
    
    return 0;
}
