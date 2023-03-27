all:
	arm-none-eabi-gcc -march=armv6 -c -Os nettoyeur.c
	arm-none-eabi-objcopy -O binary nettoyeur.o nettoyeur.bin
	rm nettoyeur.o
