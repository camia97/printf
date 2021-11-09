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
