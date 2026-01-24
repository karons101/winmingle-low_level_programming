section .data
    msg db "Hello, WINMINGLE", 10, 0

section .text
    extern printf
    global main

main:
    push rbp
    mov rdi, msg
    xor rax, rax
    call printf
    pop rbp
    
    mov rax, 0
    ret
