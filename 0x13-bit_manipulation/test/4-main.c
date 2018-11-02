#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int ret;
	unsigned long int n;
	
	n = 1024;
	ret = clear_bit(&n, 10);
	printf("ret %d: ", ret);
	printf("%lu\n", n);

	n = 0;
	ret= clear_bit(&n, 10);
	printf("ret %d: ", ret);
	printf("%lu\n", n);
	
	n = 98;
	ret = clear_bit(&n, 1);
	printf("ret %d: ", ret);
	printf("%lu\n", n);
	
	n = 1024;
	ret = clear_bit(&n, 9);
	printf("ret %d: ", ret);
	printf("%lu\n", n);
	
	return (0);
}
