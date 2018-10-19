#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function will print the number passes to it.
 * @separator: element to print as the separator.
 * @n: number of elements to print.
 * @...: arguments to print.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i = 0;

	va_start(vlist, n);

	if (n == 0)
		return;
	while (i < n)
	{

		printf("%d", va_arg(vlist, int));
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	putchar(10);
}
