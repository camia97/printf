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
int rec_bin(unsigned int n)
{
	unsigned int larg = 0;

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
/**
 * op_prev - reverse a string
 * @ele: list of arguments
 * Return: length of string
 */
int op_prev(va_list ele)
{
	char *aux = va_arg(ele, char *);
	int larg, rev;

	for (larg = 0; aux[larg]; larg++)
		;
	for (rev = larg - 1; rev >= 0; rev--)
		_putchar(aux[rev]);
	return (larg);
}
