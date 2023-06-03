section .data
    form db 'Hello, Holberton', 0
    fmt db '%s', 0

section .text
    global _stat

_stat:
    ; Call printf function
    mov rdi, fmt
    mov rsi, form
    xor ebx, ebx
    call printf

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall
