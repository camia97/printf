#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct printable - Printf structure
 * @op_op: the different operations
 * @f: pointer to function
 */
typedef struct printable
{
	char *op_op;
	int (*f)(va_list ele);
} pstruct;
int op_pchar(va_list a);
int _printf(const char *format, ...);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
int op_pstring(va_list ele);
#endif
