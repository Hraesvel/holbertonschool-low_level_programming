#include "holberton.h"

/**
 * print_times_table - print out the 9 times table
 * @n: Valuse use to generate times tables.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int v, h;

	if (n > 15)
	{
		return;
	}
	for (h = 0 ; h < n + 1 ; h++)
	{
		_putchar('0');
		for (v = 1 ; v < n + 1 ; v++)
		{
			int sum = v * h;

			_putchar(',');
                        if (sum / 1000 == 0)
                        {
                                _putchar(32);
                        }
                        else
                        {
                                _putchar('0' + (sum / 1000));
                        }
			if (sum / 100 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (sum / 100));
			}
			if (sum / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				if ((sum / 10) > 9)
				{
					_putchar('0' + (sum / 10 % 10));
				}
				else
				{
				_putchar('0' + (sum / 10));
				}
			}
			if (sum % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (sum % 10));
			}
		}
		_putchar('\n');
	}
}
