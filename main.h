#ifndef MAIN_H
#define MAIN_H
/**
 * struct printable - Printf structure
 * @op_op: the different operations
 * @f: pointer to function
 */
typedef struct printable
{
	char *op_op;
	char (*f)(va_list op_arg);
} pstruct;
int _printf(const char *format, ...);
char *str_concat(char *s1, char *s2);

#endif
