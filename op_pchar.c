#include "main.h"
/**
 * op_pchar - print a char
 * @a: list of arguments
 * Return: 1
 */
int op_pchar(va_list a)
{
	char c = va_arg(a, int);

	_putchar(c);
	return (1);
}
