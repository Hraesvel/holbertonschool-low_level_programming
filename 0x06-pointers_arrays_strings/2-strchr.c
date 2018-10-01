#include "holberton.h"

/**
 * _strchr - returns a point to the first occurance of a character in a string.
 * @s: string to search for the character in.
 * @c: char to the search for.
 *
 * Return: pointer to char or else NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
	}

	return (s);
}
