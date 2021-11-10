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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * fstruc - function of struct
 * @j: int pos the struct
 * Return: struct
 */
pstruct fstruc(int j)
{
pstruct artype[] = {
	{"c", op_pchar},
	{"s", op_pstring},
	{"d", op_pdig},
	{"i", op_pdig},
	{"b", op_pbin},
	{"r", op_prev},
	{NULL, NULL}
};
	return (artype[j]);
}
/**
 * dig - print a digit
 * @d: int
 * Return: larg of the digit
 */
int dig(int d)
{	unsigned int aux = 0;
	int largo = 0;

	if (d < 0)
	{
		_putchar('-');
		largo++;
		aux = -d;
	}
	else
		aux = d;
	if (d / 10)
	{
		largo += dig(aux / 10);
	}
	_putchar(aux % 10 + '0');
	largo++;
	return (largo);
}
