@ shellcode from iloader source, thanks xerub
    .text
	.syntax	unified

    .org    0x15514
    .thumb
    .thumb_func
_cache_stuff:
    bx    lr

	.org	0x2D64C
	.global	_prepare_and_jump
	.thumb
	.thumb_func
_prepare_and_jump:
	ldr	sp, =0x4FFF8000
    bl _cache_stuff
    ldr r4, =0x44000000
    bx r4               @ reload iBoot
