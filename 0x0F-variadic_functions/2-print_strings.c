#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print given string
 * @separator: separator to print with if Null don't print any separators.
 * @n: number of arguments to print.
 * @...: string to print.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vls;
	unsigned int i;

	va_start(vls, n);

	if (n == 0)
		return;
	i = 0;
	while (i < n)
	{
		printf("%s", va_arg(vls, char*));
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	putchar(10);
	va_end(vls);
}
