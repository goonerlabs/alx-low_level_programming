section .data
    message db 'Hello, Holberton', 0x0a, 0  ; message to be printed with new line
section .text
    global main
    extern printf
main:
    push rbp
    mov rbp, rsp

    ; Print message using printf function
    mov rdi, message   ; set first argument to message
    xor rax, rax       ; clear rax register
    call printf        ; call printf function

    ; Exit program
    xor eax, eax       ; clear eax register
    pop rbp
    ret
