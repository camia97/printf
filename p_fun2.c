#include "main.h"
/**
 * op_pdig - print a digit
 * @ele: list of arguments
 * Return: digit
 */
int op_pdig(va_list ele)
{
	int aux_pdig = va_arg(ele, int);

	return (dig(aux_pdig));
}
/**
 * op_pbin - print a binary
 * @ele: list of arguments
 * Return: function
 */
int op_pbin(va_list ele)
{
	int aux_pbin = va_arg(ele, int);

	return (rec_bin(aux_pbin));
}
/**
 * rec_bin - change a binary
 * @n: int
 * Return: larg
 */
int rec_bin(int n)
{
	int larg = 0;

	if (n >= 1)
	{
		larg += rec_bin(n / 2);
		_putchar(n % 2 + '0');
		larg++;
	}
	else
		return (-1);
	return (larg);
}
