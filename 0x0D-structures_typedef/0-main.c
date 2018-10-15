#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "Django";
	my_dog.age = 3.5;
	my_dog.owner = "Jay";
	printf("My name is %s, I am %.1f and my hooman is %s :)  - Woof!\n",
			my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
