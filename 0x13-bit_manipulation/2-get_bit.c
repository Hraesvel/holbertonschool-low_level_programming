#include "holberton.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to scan.
 * index: bit to return.
 *
 * Return: Bit (0 | 1) 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int i;

	bit = ((n >> index) & 1);

	for (i = 0; n != 0; ++i)
		n >>= 1;
	i--;
	if (i < index)
		return (-1);
	return (bit);
}
