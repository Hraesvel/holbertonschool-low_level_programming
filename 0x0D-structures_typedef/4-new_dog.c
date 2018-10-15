#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog from the dna of the first dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	if (!(name && owner))
		return (NULL);

	n = malloc(sizeof(name));
	if (!n)
		return (NULL);
	n = name;

	o = malloc(sizeof(owner));
	if (!o)
	{
		free(n);
		return (NULL);
	}
	o = owner;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(n);
		free(o);
		return (NULL);
	}
	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
