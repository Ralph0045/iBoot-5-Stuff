#include <stdio.h>

#define TARGET_JUMPADDR 0x44000000

int
main (void)
{
	*(unsigned int *)(TARGET_JUMPADDR + 0x34144) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3416c) = 0x01;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3417c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34188) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3418c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34190) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34264) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3426c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34270) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34274) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34278) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3427c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34288) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34790) = 0x5FF34790;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34794) = 0x5FF34790;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34798) = 0x5FF34798;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3479c) = 0x5FF34798;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347a0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347a8) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347ac) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347b0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347c0) = 0x5FF347C4;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347d8) = 0x02;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347e0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347e4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347e8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347ec) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347f0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347f4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347f8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x347fc) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34800) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34804) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34828) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3482c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34858) = 0x5FF34858;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3485c) = 0x5FF34858;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34860) = 0x5FF34860;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34864) = 0x5FF34860;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3486c) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34870) = 0x01;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34880) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34884) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34888) = 0x60A0100;
	*(unsigned int *)(TARGET_JUMPADDR + 0x3489c) = 0x5FF3489C;
	*(unsigned int *)(TARGET_JUMPADDR + 0x348a0) = 0x5FF3489C;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34940) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34944) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34948) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34988) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x349c0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34af4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34af8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34afc) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b04) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b08) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b10) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b20) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b24) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b28) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b2c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b34) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b38) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b40) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b44) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b48) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b50) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b54) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b5c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b6c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b70) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b74) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b78) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b8c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b90) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b94) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34b9c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34ba0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34ba8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bb8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bbc) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bc0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bc4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bcc) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bd0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bd8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bdc) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34be0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34be8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bec) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34bf4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34c04) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34c08) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34c0c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x34c10) = 0x00;

	return 0;
}