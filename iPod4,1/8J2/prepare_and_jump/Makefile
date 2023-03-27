all:
	arm-none-eabi-as -mthumb --fatal-warnings -o prepare_and_jump.o prepare_and_jump.S
	arm-none-eabi-objcopy -O binary prepare_and_jump.o prepare_and_jump.bin
	rm prepare_and_jump.o
