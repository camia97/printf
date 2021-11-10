#include "main.h"
/**
 * op_pbinary - print a unsigned
 * @ele: list of arguments
 * Return: convertion of a binary
 */
int op_pbinary(va_list ele)
{
	unsigned int n = va_arg(ele, int);

	return (convert(n, 2));
}
/**
* convert - convert a binary
* @base: integer
* @n: integer
* Return: largo
*/
int convert(int n, int base)
{
	int largo = 0, res;

	res = n % base;

	if (n != 0)
	{
	if (n / base)
	{
		largo += convert((n / base), base);
		_putchar (res + '0');
		largo++;
	}
	}
	return (largo);
}
