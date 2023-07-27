section .data
    hello_msg db "Hello, Holberton",0x0A,0   ; Null-terminated message with newline

section .text
    extern printf                            ; Declare printf as an external function

global _start

_start:
    ; Prepare arguments for printf
    lea rdi, [hello_msg]        ; Load the address of the hello_msg into rdi

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60                 ; syscall number for exit
    xor rdi, rdi                ; Exit code 0
    syscall                     ; Invoke syscall to exit

