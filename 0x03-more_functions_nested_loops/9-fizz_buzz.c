#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Returns: always 0 (sucess)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 100)
	{
		num++;
		if ( (num % 3) != 0 && (num % 5) != 0)
		{
			printf("%d ", num);
		}
		else if ((num % 3)  == 0 && (num%5) != 0)
		{
				printf("Fizz ");
	       	}
		else if ((num % 3) != 0 && (num % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("FizzBuzz ");
		}
	}
	return (0);
}
