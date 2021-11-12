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
