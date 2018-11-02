#include "holberton.h"
#include <limits.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to scan.
 * @index: bit to return.
 *
 * Return: Bit (0 | 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int len;

	bit = ((n >> index) & 1);
	if (n)
	{
		for (len = 0; n != 0; ++len)
			n >>= 1;
		len--;
	}
	if (len < index)
		return (-1);
	return (bit);
}
