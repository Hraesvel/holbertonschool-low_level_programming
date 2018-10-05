#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change 
 * for an amount of money.
 * @input: amount of money given in singles. 
 *
 * Return: 0 (sucesss) , 1 (Failure)
 */
int main(int argc, char *argv[])
{
	int mon, one, five, ten, tf, sum;

	mon = sum = one = five = ten = tf = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	mon = atoi(argv[1]);
	if (mon <= 0)
	{
		printf("0\n");
		return (0);
	}

	if (mon >= 25)
	{
		tf = mon / 25;
		mon -= tf * 25;
	}

	if (mon < 25 && mon >= 10)
	{
		ten = mon / 10;
		mon -= ten * 10;
	}

	if (mon < 10 && mon >= 5)
	{
		five = mon / 5;
		mon -= five * 5;
	}

	if (mon < 5)
		one = mon;

	sum = tf + ten + five + one;

	printf("%d\n", sum);
	return (0);
}
