#include <stdio.h>

#define TARGET_JUMPADDR 0x0B000000

int
main (void)
{
	*(unsigned int *)(TARGET_JUMPADDR + 0x2504c) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25800) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25804) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x2580c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25810) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x2581c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25820) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25824) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25830) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25834) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25864) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25868) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25884) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25970) = 0xFF25970;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25974) = 0xFF25970;
	*(unsigned int *)(TARGET_JUMPADDR + 0x25978) = 0xFF25978;
	*(unsigned int *)(TARGET_JUMPADDR + 0x2597c) = 0xFF25978;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d00) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d10) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d14) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d28) = 0xFF26D2C;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d40) = 0x02;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d48) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d4c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d50) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d54) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d58) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d5c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d60) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d64) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d68) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d6c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d90) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26d94) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26dc8) = 0xFF26DC8;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26dcc) = 0xFF26DC8;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26dd4) = 0xFFFFFFFF;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e10) = 0xFF26E10;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e14) = 0xFF26E10;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e38) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e3c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e40) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e84) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e98) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26e9c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26ea0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26ea4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26ea8) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26eb4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26ee0) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26ee4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26ef4) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f20) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f24) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f2c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f30) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f34) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f38) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f3c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f40) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f44) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f48) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f4c) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f50) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f54) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f58) = 0x00;
	*(unsigned int *)(TARGET_JUMPADDR + 0x26f5c) = 0x00;

	return 0;
}
