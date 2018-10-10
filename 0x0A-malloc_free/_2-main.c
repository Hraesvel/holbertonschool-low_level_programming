#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;
	
	if (ac <= 2)
		s = str_concat("Betty ", "Holberton");
	else if (ac > 3)
	{
		printf("only 2\n");
		return (1);
	}
	else
		s = str_concat(av[1], av[2]);

	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
