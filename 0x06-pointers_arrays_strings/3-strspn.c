#include "holberton.h"

/**
 * _strspn - function  calculates  the  length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: string to search in.
 * @accept: bytes in which to search for.
 *
 * Return: the number (U_INT) of bytes matching accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, count;

	i = 0;
	z = 0;
	count = 0;
	while (s[i] != ',')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (accept[z] == s[i])
			{
				count++;
			}
			z++;
		}

		i++;
	}
	return (count);
}