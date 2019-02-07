#include "sort.h"
#include <stdlib.h>
#include <stdio.h>


void swap(int *array, int idx, int wall);
void partition(int *array, size_t size, int lo, int hi, int gaurd);

/**
 * quick_sort - sort an array using the quick sort algorithm.
 * @array: pointer to an array
 * @size: size of @array
 */
void quick_sort(int *array, size_t size)
{
	partition(array, size, 0, size - 1, 0);

	print_array(array, size);
}

void swap(int *array, int idx, int wall)
{
	int tmp = array[wall];

	array[wall] = array[idx];
	array[idx] = tmp;
}

void partition(int *array, size_t size, int lo, int hi, int guard)
{
	int i , pivot, wall;

	
	if ((hi - 1) - lo <= 1)
		return;
	else if (guard > 25)
		exit(400);

	if (guard > 0)
		print_array(array, size);
	
	i = wall = lo;
	pivot = hi;

	while (i <= pivot)
	{
		if (array[i] < array[pivot])
		{
			swap(array, i , wall);
			wall++;
		}
		i++;
	}

	swap(array, pivot, wall);
	partition(array, size, 0, wall - 1, guard++);
	partition(array, size, wall + 1, hi, guard++);
}
