section .data
    hello_msg db "Hello, Holberton",0x0A,0

section .text
    extern printf

global main      ; Change the entry point label from _start to main

main:
    mov   edi, format
    xor   eax, eax
    call  printf

    xor   eax, eax   ; Return 0 from the main function (optional in this case)
    ret             ; Return from main

format: db `Hello, Holberton\n`,0

