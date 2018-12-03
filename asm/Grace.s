extern _dprintf
%macro main 0
_main:
push rbp
mov rbp, rsp
lea rdi, [rel .path]
mov rsi, 0x0201
mov rdx, 0o644
mov rax, 0x2000005
syscall
jc  .ret
mov rdi, rax
lea rsi, [rel .string]
mov rdx, 10
mov rcx, 34
lea r8, [rel .string]
mov  r9, 59
call _dprintf
.ret:
mov rax, 0
leave
ret
%endmacro
%macro _nothing_1 0
%endmacro
%macro _nothing_2 0
%endmacro
section .data
.path db "Grace_kid.s", 0
.string db "extern _dprintf%1$c%%macro main 0%1$c_main:%1$cpush rbp%1$cmov rbp, rsp%1$clea rdi, [rel .path]%1$cmov rsi, 0x0201%1$cmov rdx, 0o644%1$cmov rax, 0x2000005%1$csyscall%1$cjc  .ret%1$cmov rdi, rax%1$clea rsi, [rel .string]%1$cmov rdx, 10%1$cmov rcx, 34%1$clea r8, [rel .string]%1$cmov  r9, 59%1$ccall _dprintf%1$c.ret:%1$cmov rax, 0%1$cleave%1$cret%1$c%%endmacro%1$c%%macro _nothing_1 0%1$c%%endmacro%1$c%%macro _nothing_2 0%1$c%%endmacro%1$csection .data%1$c.path db %2$cGrace_kid.s%2$c, 0%1$c.string db %2$c%3$s%2$c%1$csection .text%1$c    global _main%1$c%4$c comment%1$cmain"
section .text
    global _main
; comment
main