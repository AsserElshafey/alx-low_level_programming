global main
extern printf

section .data
	msg db "Hello, Holberton", 10, 0

section .text
main:

	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov [rbp-8], rdi
	mov [rbp-16], rsi


	mov rdi, msg
	xor rsi, rsi
	call printf


	mov rdi, [rbp-8]
	mov rsi, [rbp-16]
	add rsp, 16
	pop rbp
	ret
