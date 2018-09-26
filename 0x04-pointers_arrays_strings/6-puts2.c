#include "holberton.h"

/**
 * puts2 - every other char.
 * @str: string to process.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
