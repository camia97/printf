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
	int counter, pos_op, length = 0;
	va_list ele;

	va_start(ele, format);
	if (!format)
		return (-1);
	for (counter = 0; format[counter]; counter++)
	{
		if (format[counter] == '%')
		{
			if (!format[counter + 1])
				return (-1);
			if (format[counter + 1] == '%')
			{
				length++;
				_putchar(format[counter + 1]);
				counter++;
				continue;
			}
			for (pos_op = 0; fstruc(pos_op).op_op; pos_op++)
				if (format[counter + 1] == fstruc(pos_op).op_op[0])
				{
					length += fstruc(pos_op).f(ele);
					counter++;
					break;
				}
			if (!fstruc(pos_op).op_op)
			{
				_putchar(format[counter]);
				length++;
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
