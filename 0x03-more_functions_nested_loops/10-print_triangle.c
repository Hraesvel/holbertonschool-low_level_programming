#include "holberton.h"

/**
 * print_triangle - print a triangle at a give size.
 * @size : size of triangle to print.
 *
 *
 */
void print_triangle(int size)
{

	int i, margin, dis, to_print;

	dis = size-1;
	for (i = 0 ; i < size ; i++)
	{
		margin = 0;
		while ( margin < (dis - i))
		{
			_putchar('.');
			margin++;
		}

		to_print = size - margin;

		while(to_print > 0)
		{
			_putchar('#');
			to_print--;
		}
		_putchar('\n');
	}
}
