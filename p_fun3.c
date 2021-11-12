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
		largo++;
		if (n / base)
		{
			largo += convert((n / base), base);
		}
		_putchar(res + '0');
	}
	return (largo);
}
/**
 * op_rot13 - custom conversion specifier
 * @ele: list of arguments
 * Return: number of chars
 */
int op_rot13(va_list ele)
{
	char *aux = va_arg(ele, char *);
	int counter;

	for (counter = 0; aux[counter]; counter++)
	{
		if ((aux[counter] >= 78 && aux[counter] <= 90) ||
				(aux[counter] >= 110 && aux[counter] <= 122))
		{
			_putchar(aux[counter] - 13);
		}
		else if ((aux[counter] >= 65 && aux[counter] < 78) ||
				(aux[counter] >= 97 && aux[counter] < 110))
		{
			_putchar(aux[counter] + 13);
		}
		else
			_putchar(aux[counter]);
	}
	return (counter);
}
