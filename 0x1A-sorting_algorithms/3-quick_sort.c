#include "sort.h"
#include <stdlib.h>
#include <stdio.h>


void swap(int *array, int idx, int wall);
void partition(int *array, size_t size, int lo, int hi);

/**
 * quick_sort - sort an array using the quick sort algorithm.
 * @array: pointer to an array
 * @size: size of @array
 */
void quick_sort(int *array, size_t size)
{
	partition(array, size, 0, size - 1);

}

/**
 * swap - swaps 2 elements of a given array.
 *
 * @array: point to an array
 * @idx: index of postion withing the array
 * @wall: index of postion withing the array
 */
void swap(int *array, int idx, int wall)
{
	int tmp = array[wall];

	array[wall] = array[idx];
	array[idx] = tmp;
}

/**
 * partition - sort a partition of an array and if need will recursevly
 * partition the array again.
 *
 * @array: arary to be partitioned and sorted
 * @size: size of the array
 * @lo: begin of a partition. (left side)
 * @hi: end of a partition. (right side)
 */
void partition(int *array, size_t size, int lo, int hi)
{
	int i, pivot, wall;

	if ((hi) - lo <= 0)
		return;
	else if (hi == 1 && array[0] < array[hi])
		return;

	i = wall = lo;
	pivot = hi;
	while (i < pivot)
	{
		if (array[i] < array[pivot])
		{
			swap(array, i, wall);
			wall++;
		}
		i++;
	}

	swap(array, pivot, wall);
	print_array(array, size);

	partition(array, size, wall + 1, pivot);
	partition(array, size, lo, wall - 1);
}
