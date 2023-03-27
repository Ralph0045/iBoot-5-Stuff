all:
	arm-none-eabi-gcc payload.c -fpie -W -pedantic -Wno-long-long -Os -L. -nostdlib -emain -march=armv6 -mthumb -o payload.elf
	arm-none-eabi-objcopy -O binary payload.elf payload.bin
	rm payload.elf
