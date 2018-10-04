#include "holberton.h"


int find_pal(char start, char *s);

/**
 * is_palindrome - checks if string is a palindrom
 * @s: string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (!(*s))
		return (0);
	return (find_pal(*s, (s + 1)));
}

/**
 * find_pal - helper for is_palindrom
 * @start: first char of the string.
 * @s: remaining of the string to test on.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int find_pal(char start, char *s)
{
	if (!(*s) && (*(s - 1) == start))
		return (1);
	else if (*s != '\0')
		return (find_pal(start, (s + 1)));
	else
		return (0);

}
