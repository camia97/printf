#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * op_pstring - prints string
 * @ele: list of arguments
 * Return: largo of string
 */
int op_pstring(va_list ele)
{
	char *str;
	int largo;

	str = va_arg(ele, char *);
	if (str)
		for (largo = 0; str[largo]; largo++)
			_putchar(str[largo]);
	else
		largo = _printf("(null)");

	return (largo);
}
