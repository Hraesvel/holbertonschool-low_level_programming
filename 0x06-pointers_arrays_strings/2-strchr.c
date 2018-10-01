#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - returns a point to the first occurance of a character in a string.
 * @s: string to search for the character in.
 * @c: char to the search for.
 *
 * Return: pointer to char or else NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	return ((s + i));
}
