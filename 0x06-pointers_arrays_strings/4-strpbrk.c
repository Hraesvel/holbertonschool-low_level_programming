#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: haystack.
 * @accept: needle.
 *
 * Return: pointer to to byte s that matches one of the byes in accept, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (*s !='\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if( *s == accept[i])
				return(s);
			i++;
		}
		s++;
	}

	return (s);
}
