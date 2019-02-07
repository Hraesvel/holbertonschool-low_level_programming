#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {73, 14, 42, 82, 9, 43, 94, 77, 97, 92, 46, 47, 16, 68, 54, 60, 80, 4, 66, 10, 24, 67, 20, 52, 1, 5, 23, 62, 48, 88, 96, 41, 19, 59, 53, 2, 12, 50, 74, 58, 11, 45, 40, 17, 93, 7, 22, 33, 70, 38};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	quick_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
