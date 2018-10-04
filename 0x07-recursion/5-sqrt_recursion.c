#include "holberton.h"

int sqrt_rec_odd(int start, int n);
/**
 * _sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 *
 * Return: the sqrt as a Int.
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n == 0)
		return (-1);
	else if (n / 2 == 2)
		return (2);
	else if (n == 1)
		return (1);

	if (!(n % 2))
	{
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else
			return (sqrt * 2);
	}
	else
	{
		return (sqrt_rec_odd(n, n - 1));
	}
}

/**
 * sqrt_rec_odd - helper to deal with odd numbers and primes.
 * @start: the odd or prime number to check for sqrt.
 * @n: number to find the square root of.
 *
 * Return: the sqrt as a Int.
 */
int sqrt_rec_odd(int start, int n)
{
	if (n < 0)
		return (-1);
	else if (start == n * n)
		return (n);
	else
		return (sqrt_rec_odd(start, n - 1));
}
