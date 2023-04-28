; define a string to be printed
section .data
    hello db 'Hello, Holberton', 10, 0

; program entry point
section .text
    global main
    extern printf

main:
    ; function prologue
    push rbp            ; save the previous frame pointer
    mov rbp, rsp        ; set up the current frame pointer

    ; call printf to print the string
    xor eax, eax        ; set eax to zero for proper return value
    lea rdi, [hello]    ; load the address of the string into rdi
    call printf         ; call the printf function to print the string

    ; function epilogue
    xor eax, eax        ; clear eax (return value)
    pop rbp             ; restore the previous frame pointer
    ret                 ; return from the function

