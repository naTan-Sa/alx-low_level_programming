section .data
    msg db "Hello, ALX", 10, 0       ; string + newline + null terminator

section .text
    extern printf                     ; tell assembler that printf is in another file
    global main                       ; define entry point for gcc

main:
    ; prepare arguments for printf
    ; printf("Hello, ALX\n");

    lea rdi, [rel msg]                ; RDI = address of msg (1st argument to printf)
    xor eax, eax                      ; clear RAX (no floating-point args for printf)
    call printf                       ; call printf

    ; return 0 (exit successfully)
    mov eax, 0
    ret
