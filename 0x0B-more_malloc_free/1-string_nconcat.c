#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * string_nconcat - fuction that concats two strings but with s2 by n amount.
 * @s1: base sting to concat to. `Null` will return as empty.
 * @s2: string to copy from. 'NULL' will return as empty string.
 * @n: amount of s2 to copy.
 * Return:
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, a, b;
	
	a = b = 0;
	if (s1)
		a = _strlen(s1);
	if (s2)
		b = _strlen(s2);
	if (!(n >= b) && s2)
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);
	if (!str)
		return(NULL);

	for (i = 0; i < (a + b); i++)
	{
		if (i < a)
			str[i] = s1[i];
		else 
			str[i] = s2[i - a];
	}

	str[i + 1] = '\0';

	return (str);
}
