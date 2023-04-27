global  main
extern  printf

section .data
    hello_string db 'Hello, Holberton', 10, 0 ; The string to be printed followed by a newline and a null terminator

section .text
main:
    ; Save registers
    push    rbp
    mov     rbp, rsp

    ; Prepare the arguments for printf
    lea     rdi, [hello_string] ; Load the address of the hello_string into the first argument (rdi)
    xor     rax, rax            ; Set rax to 0 (printf is a variadic function, so rax must be initialized to the number of vector registers used)

    ; Call printf
    call    printf

    ; Restore registers
    mov     rsp, rbp
    pop     rbp

    ; Exit the program
    xor     rdi, rdi ; Set the exit code to 0
    mov     rax,60  ; Set rax to the exit syscall number (60 for x86_64)
    syscall         ; Call the exit syscall
