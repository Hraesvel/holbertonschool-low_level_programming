#include <stdio.h>
#include "holberton.h"
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 1);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	n = get_bit(1024, 11);
	printf("%d\n", n);
	n = get_bit(0, 0);
	printf("%d\n", n);
	n = get_bit(ULONG_MAX, 65);
	printf("%d\n", n);
	return (0);
}
