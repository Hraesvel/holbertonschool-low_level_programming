#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void pr_int(va_list *val)
{
	printf("%d",va_arg(val, int));
}

void pr_char(va_list *val)
{
	printf("%c", va_arg(val, int));
}

void pr_float(va_list *val)
{
	printf("%f", va_arg(val, double));
}

void pr_str(va_list *val)
{
	printf("%s" , va_arg(val, char *));
}

typedef struct print_ops {
	char *op;
	void (*f)(va_list*);
} p_op;
/**
 * print_all - print all argument that match with format.
 * @format: type to print out.
 * @...: arguments to print.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
        
	int i, j;
	va_list vl, *ptr;
	p_op ops[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{NULL, NULL}
	};

	va_start(vl, format);
	ptr = &vl;
	i = j = 0;
	while (format[j])
	{
		if(ops[i].op[0] == format[j])
		{
			(ops[i].f)(ptr);
			printf(", ");
			i = 0;
			j++;
			continue;

		}
		i++;
		if (!format[i])
		{
			j++;
			i = 0;
		}

	}
	printf("%lu\n", sizeof(vl));
	va_end(vl);	
}
