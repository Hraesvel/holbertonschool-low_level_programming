#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcopy - copy read only data to mutatable.
 * @dst: pointer to copy char to.
 * @src: read only data.
 */
void _strcopy(char *dst, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}

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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	n = malloc(sizeof(name));
	if (!n)
	{
		free(d);
		return (NULL);
	}

	o = malloc(sizeof(owner));
	if (!o)
	{
		free(n);
		free(d);
		return (NULL);
	}

	_strcopy(n, name);
	_strcopy(o, owner);
	d->name = n;
	d->age = age;
	d->owner = o;
	return (d);
}
