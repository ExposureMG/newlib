/*
	setjmp.h
	stubs for future use.
*/

#ifndef _SETJMP_H_
#define _SETJMP_H_

#include "_ansi.h"
#include <sys/cdefs.h>
#include <machine/setjmp.h>

_BEGIN_STD_C

void	longjmp (jmp_buf __jmpb, int __retval) __dead2;
#ifdef _SETJMP_ASM_NAME
/* The target's setjmp has another assembler name (machine/setjmp.h).  */
int	setjmp (jmp_buf __jmpb) __asm__ (__ASMNAME (_SETJMP_ASM_NAME))
	__returns_twice;
#else
int	setjmp (jmp_buf __jmpb) __returns_twice;
#endif

_END_STD_C

#endif /* _SETJMP_H_ */

