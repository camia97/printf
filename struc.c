#include "main.h"
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
	{NULL, NULL}
};
	return (artype[j]);
}
