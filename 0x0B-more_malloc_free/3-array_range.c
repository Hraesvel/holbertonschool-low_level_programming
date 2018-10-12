#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Function create and array of integers.
 * @min: starting number.
 * @max: ending number.
 *
 * Return: pointer to the area in memory.
 */
int *array_range(int min, int max)
{
	int *arr;
	int a, b;

	a = b = 0;
	if (min > max)
		return (NULL);

	if (min < 0)
	{
		a = abs(min);
		b = abs(max);

		b = b + a;
	}
	else
		b = max - min;

	arr = malloc(sizeof(int) * (b + 1));
	if (!arr)
		return (NULL);
	do {
		arr[b] = max;
		max--;
	} while (--b >= 0);

	return (arr);
}
