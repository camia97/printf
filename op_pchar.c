#include "main.h"
/*
 *
 *
 */
int op_pchar(va_list a)
{
	char c = va_arg(a, int);

	_putchar(c);
	return (1);
}
