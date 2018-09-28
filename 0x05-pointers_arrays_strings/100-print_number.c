#include "holberton.h"

/**
 *
 *
 *
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -1 * n;
		_putchar('-');
	}
	else
	{
		num = n;
	}

	if (n >= 10)
	{
		print_number(num /10);
	}
	_putchar('0' + ( num %10));
}
