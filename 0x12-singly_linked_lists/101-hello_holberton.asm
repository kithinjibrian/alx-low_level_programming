section .data
    hello db "Hello, Holberton", 0

section .text
    global _start

_start:
    ; sys_write syscall: int 0x80
    ; eax = 4 (sys_write)
    ; ebx = 1 (stdout)
    ; ecx = address of the string (hello)
    ; edx = length of the string
    mov eax, 4
    mov ebx, 1
    mov ecx, hello
    mov edx, 13   ; Length of the string
    int 0x80      ; Invoke the syscall

    ; sys_exit syscall: int 0x80
    ; eax = 1 (sys_exit)
    ; ebx = exit status
    mov eax, 1
    xor ebx, ebx  ; Exit status 0
    int 0x80      ; Invoke the syscall
