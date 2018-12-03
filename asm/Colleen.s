extern _printf
section .data
quine:
	.string db "extern _printf%1$csection .data%1$cquine:%1$c%2$c.string db %3$c%4$s%3$c, 0%1$csection .text%1$c%2$cglobal _quine%1$c%2$cglobal _main%1$c%5$ccomment%1$c_quine:%1$c%2$cpush	rbp%1$c%2$cmov		rbp, rsp%1$c%2$clea		rdi, [rel quine.string]%1$c%2$cmov		rsi, 10%1$c%2$cmov		rdx, 9%1$c%2$cmov		rcx, 34%1$c%2$clea		r8, [rel quine.string]%1$c%2$cmov		r9, 59%1$c%2$ccall	_printf%1$c%2$cleave%1$c%2$cret%1$c_main:%1$c%2$cpush	rbp%1$c%2$cmov		rbp, rsp%1$c%2$c%5$ccomment%1$c%2$ccall	_quine%1$c%2$cleave%1$c%2$cret%1$c", 0
section .text
	global _quine
	global _main
;comment
_quine:
	push	rbp
	mov		rbp, rsp
	lea		rdi, [rel quine.string]
	mov		rsi, 10
	mov		rdx, 9
	mov		rcx, 34
	lea		r8, [rel quine.string]
	mov		r9, 59
	call	_printf
	leave
	ret
_main:
	push	rbp
	mov		rbp, rsp
	;comment
	call	_quine
	leave
	ret
