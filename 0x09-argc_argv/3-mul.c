#include <stdio.h>

/**
 * main - multiplies two numbers
 * @1: an arg
 *
 * Return: 0 (Sucess) else 1 (Failure).
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;
	
	/*one for app name and two for the int values */
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
