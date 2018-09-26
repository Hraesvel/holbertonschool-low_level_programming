#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - every other char.
 * @str: string to process.
 */
void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count += 2;
	}
	_putchar('\n');
}
