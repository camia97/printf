#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(cons char *format, ...)
{
	int counter:x;
	char *ele, *artype;

	va_list ele;

	pstrust artype[]={
	{"c", op_pchar}
	{"s", op_pstring}
/*	{"d",op_pdecimal}
	{"i", op_pinterger}
	{"b", op_pbinary}
	{"u", op_punsign}
	{"o", op_poctal}
	{"x", op_phexalow}
	{"X", op_phexaup}
 	{"+", op_pplus}
 	{"#", op_palt}
 	{"l", op_pl}
	{"h", op_ph}
 */
	{NULL, NULL}
};
va_start(ele, format);
for (counter = 0; format[counter]!= NULL; counter++)
{
	if (format[counter] =='%')
	{
		counter++;
		for (pos_op = 0; artype[pos_op] != NULL; pos_op++)
		{
			if (format[counter == artype[pos_op].op_op[0])
				artype[pos_op].f(ele);

		}
	}	
}

