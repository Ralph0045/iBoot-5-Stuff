all:
	arm-none-eabi-as -mthumb --fatal-warnings -o prepare_and_jump.o prepare_and_jump.S
	arm-none-eabi-objcopy -O binary prepare_and_jump.o prepare_and_jump.bin
	arm-none-eabi-gcc payload.c -fpie -W -pedantic -Wno-long-long -Os -L. -nostdlib -emain -march=armv7-a -mthumb -o payload.elf
	arm-none-eabi-objcopy -O binary payload.elf payload.bin