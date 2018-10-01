#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept, or NUL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z; 

	i = 0;

	while (s[z] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[z] == accept[i])
				return ((s + z));
			i++;
		}
		z++;
	}
	if (*accept == '\0')
		return ((s + z));
	return (NULL);
}
