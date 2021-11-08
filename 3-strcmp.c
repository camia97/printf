#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: number of char
 */
int _strcmp(char *s1, char *s2)
{
	int comp;

	for (comp = 0; s1[comp]; comp++)
	{
		if (s1[comp] != s2[comp])
		{
			return (s1[comp] - s2[comp]);
		}
	}
	return (0);
}
