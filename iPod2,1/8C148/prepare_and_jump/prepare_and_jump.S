@ shellcode from iloader source, thanks xerub
    .text
	.syntax	unified

    .org    0xF072
    .thumb
    .thumb_func
_cache_stuff:
    bx    lr

	.org	0x283D8
	.global	_prepare_and_jump
	.thumb
	.thumb_func
_prepare_and_jump:
    ldr r0, =0xFFF7800
    mov sp, r0
    bl _cache_stuff
    ldr r0, =0x0B000000
    bx r0               @ reload iBoot
