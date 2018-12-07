extern _dprintf
extern _sprintf
extern _strcmp
extern _system
extern _printf
section .bss
.filename resb 64
.exec resb 256
section .data
.index dd 5, 0
.conv db "%d", 0
.path db "Sully_%d.s", 0
.file db __FILE__ , 0
.file_cmp db "Sully.s", 0
.cmd db "nasm -f macho64 -o Sully_%d.o Sully_%d.s && gcc -o Sully_%d Sully_%d.o && ./Sully_%d", 0
.string db "extern _dprintf%1$cextern _sprintf%1$cextern _strcmp%1$cextern _system%1$csection .bss%1$c.filename resb 64%1$c.exec resb 256%1$csection .data%1$c.index dd %5$d, 0%1$c.conv db %2$c%4$s%2$c, 0%1$c.path db %2$cSully_%4$s.s%2$c, 0%1$c.file db __FILE__ , 0%1$c.file_cmp db %2$cSully.s%2$c, 0%1$c.cmd db %2$cnasm -f macho64 -o Sully_%4$s.o Sully_%4$s.s && gcc -o Sully_%4$s Sully_%4$s.o && ./Sully_%4$s%2$c, 0%1$c.string db %2$c%3$s%2$c, 0%1$csection .text%1$c    global _main%1$c_main:%1$cpush rbp%1$cmov rbp, rsp%1$csub rsp, 8%1$cmov r9, [rel .index]%1$cpush r9%1$ccmp r9, 0x0%1$cje .ret%1$clea rdi, [rel .file]%1$clea rsi, [rel .file_cmp]%1$ccall _strcmp%1$ccmp rax, 0%1$cje .create_filename%1$cpop r9%1$cdec r9%1$cpush r9%1$cmov rax, r9%1$c.create_filename:%1$clea rdi, [rel .filename]%1$clea rsi, [rel .path]%1$cmov rdx, r9%1$ccall _sprintf%1$clea rdi, [rel .filename]%1$cmov rsi, 0x201%1$cmov rdx, 0o644%1$cmov rax, 0x2000005%1$csyscall%1$cjc .ret%1$cmov r10, r9%1$cmov rdi, rax%1$clea rsi, [rel .string]%1$cmov rdx, 10%1$cmov rcx, 34%1$clea r8, [rel .string]%1$clea r9, [rel .conv]%1$ccall _dprintf%1$cpop r9%1$cmov r10, r9%1$cpush r9%1$clea rdi, [rel .exec]%1$clea rsi, [rel .cmd]%1$cmov rdx, r10%1$cmov rcx, r10%1$cmov r8, r10%1$cmov r9, r10%1$ccall _sprintf%1$clea rdi, [rel .exec]%1$ccall _system%1$c.ret:%1$cmov rax, 0x0%1$cleave%1$cret", 0
section .text
    global _main
_main:
push rbp
mov rbp, rsp
sub rsp, 8
mov r9, [rel .index]
push r9
cmp r9, 0x0
je .ret
lea rdi, [rel .file]
lea rsi, [rel .file_cmp]
call _strcmp
cmp rax, 0
je .create_filename
pop r9
dec r9
push r9
mov rax, r9
.create_filename:
lea rdi, [rel .filename]
lea rsi, [rel .path]
mov rdx, r9
call _sprintf
lea rdi, [rel .filename]
mov rsi, 0x201
mov rdx, 0o644
mov rax, 0x2000005
syscall
jc .ret
mov r10, r9
mov rdi, rax
lea rsi, [rel .string]
mov rdx, 10
mov rcx, 34
lea r8, [rel .string]
lea r9, [rel .conv]
call _dprintf
pop r9
mov r10, r9
push r9
lea rdi, [rel .exec]
lea rsi, [rel .cmd]
mov rdx, r10
mov rcx, r10
mov r8, r10
mov r9, r10
call _sprintf
lea rdi, [rel .exec]
call _system
; call _printf
.ret:
mov rax, 0x0
leave
ret