#include <stdio.h>

/**
 * main - Entry point, Also print number of arguments starting a 0.
 * @argc: count
 * @argv: arguments string
 *
 * Return: INT count of arguments.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
