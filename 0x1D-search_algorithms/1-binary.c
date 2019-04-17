#include <stdlib.h>
#include <stdio.h>

int bin_search(int *array, size_t min, size_t max, int value);

/**
 * binary_search - search for an element using the binary search algorithm
 *
 * @array: haystack (int* array)
 * @size: size of the haystack (size_t)
 * @value: needle (int)
 *
 * Return: the index of first sucessful location else -1 (failure)
 */
int binary_search(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);
	return (bin_search(array, 0, size - 1, value));
}


/**
 * bin_search - recursively search for an
 * element using the binary search algorithm
 *
 * @array: haystack (int* array)
 * @min: of left side
 * @max: index of right
 * @value: needle (int)
 *
 * Return: the index of first sucessful location else -1 (failure)
 */
int bin_search(int *array, size_t min, size_t max, int value)
{

	size_t mid;

	if (max <= 0 || min >= max)
		return (-1);
	if (min == 0)
		mid = max / 2;
	else
		mid =  min + ((max - min) / 2);

	if (value == array[mid])
		return ((int) mid);

	if (value < array[mid])
		return (bin_search(array, min, mid, value));

	if (value > array[mid])
		return (bin_search(array, mid + 1, max, value));

	return (-1);

}
