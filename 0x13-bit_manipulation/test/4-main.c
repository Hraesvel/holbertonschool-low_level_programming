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
	printf("%lu\n", n);
	printf("ret %d\n", ret);

	n = 0;
	ret= clear_bit(&n, 10);
	printf("%lu\n", n);
	printf("ret %d\n", ret);
	
	n = 98;
	ret = clear_bit(&n, 1);
	printf("%lu\n", n);
	printf("ret %d\n", ret);
	
	n = 1024;
	ret = clear_bit(&n, 9);
	printf("%lu\n", n);
	printf("ret %d\n", ret);
	
	return (0);
}
