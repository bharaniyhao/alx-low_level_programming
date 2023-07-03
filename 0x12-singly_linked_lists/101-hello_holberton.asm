section .data
    msg db "Hello, Holberton",0xA,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp
    sub rsp, 16

    mov edi, msg
    mov eax, 0
    call printf

    add rsp, 16
    pop rbp
    mov eax, 0
    ret

