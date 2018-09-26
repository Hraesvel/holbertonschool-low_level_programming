#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - every other char.
 * @str: string to process.
 */
void puts2(char *str)
{
	int i;
	int count = 0;

	while (*(str + count) != '\0')
	{
	count++;
	}
	if (!(count % 2))
		count++;
	else
		count--;

	for (i = 0; i < count ; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
