#include "holberton.h"
#include <stdio.h>

int _pow(int a , int b);

void print_number(int n)
{
	int collection = n;
	unsigned new_num = n;
	int count = 0;
	int print = 0;

	if (n < 0)
	{
		_putchar('-');
	}

	while (collection != 0)
	{
		collection /= 10;
		++count;
	}
	count-=1;

	do
	{
		if ((new_num / (_pow(10,count)) > 9) && count > 1)
		{
			print = new_num / (_pow(10, count));
			print = print %10;
			_putchar('0' + print);
		}
		else if (count > 1)
		{
			print = (new_num / _pow(10,count));
		       _putchar('0' + print);
		}
	       	else if (((new_num / 10) > 9) && count == 1)
		{
	       		print = (new_num / 10)%10;
			_putchar('0' + print);
		}
		else if (count == 1)
		{
			print = new_num / 10 ;
		       	_putchar('0' + print);
		}
       		else
		{
	       		print = new_num % 10;
			_putchar('0' + print);
       		}
		count--;
	}while (count > -1);
}

int _pow(int a, int b)
{
	int i;
	int p = a;

	for (i=1 ; i < b ; i++)
	{
		a*=p;
	}
	return (a);
}
