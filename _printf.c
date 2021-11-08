#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - prints according to a format
 * @format: pointer to character string
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int counter, pos_op, length;
	va_list ele;

	pstruct artype[] = {
		{"c", op_pchar},
		{"s", op_pstring},
		{NULL, NULL}
	};
va_start(ele, format);
for (counter = 0; format[counter]; counter++)
{
	if (format[counter] == '%')
{
		counter++;
		if (format[counter] == '%')
		{
			length++;
			_putchar('%');
			continue;
		}
		for (pos_op = 0; artype[pos_op].op_op; pos_op++)
		{
			if (format[counter] == artype[pos_op].op_op[0])
				length += artype[pos_op].f(ele);
		}
	}
	else
{
		_putchar(format[counter]);
		length++;
}
}
va_end(ele);
return (length);
}
