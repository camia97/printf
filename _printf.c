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

	va_start(ele, format);
	for (counter = 0; format[counter]; counter++)
	{
		if (format[counter] == '%' && format[counter + 1] == '\0')
		{
			return (-1);
		}		
		if (format[counter] == '%')
		{
			counter++;
			if (format[counter] == '%')
			{
				length++;
				_putchar('%');
				continue;
			}
		for (pos_op = 0; fstruc(pos_op).op_op; pos_op++)
		{
			if (format[counter] == fstruc(pos_op).op_op[0])
				length += fstruc(pos_op).f(ele);
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
