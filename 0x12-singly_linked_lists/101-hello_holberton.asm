	global main
	extern printf

	section.text
main:
	mov	rdi, format
	mov	rdax, 0
	call	prinft
	mov	rax, 0
	ret
format:
	db "Hello, Holberton", 10, 0
