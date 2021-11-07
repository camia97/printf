#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: null if is 0 and pointer
 */
char *str_concat(char *s1, char *s2)
{
	int larg1, larg2, larg3, larg4 = 0;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (larg1 = 0; s1[larg1] != '\0'; larg1++)
		;

	for (larg2 = 0; s2[larg2] != '\0'; larg2++)
		;

	ptr = malloc(sizeof(char) * (larg1 + larg2) + 1);
	if (ptr == 0)
		return (NULL);
	for (larg3 = 0; larg3 < larg1; larg3++)
	{
		ptr[larg3] = s1[larg3];
	}
	for (; larg3 <= larg1 + larg2; larg3++)
	{
		ptr[larg3] = s2[larg4];
		larg4++;
	}
	return (ptr);
}
