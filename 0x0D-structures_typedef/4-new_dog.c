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

	if (!(name && owner))
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(sizeof(name));
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	d->name = name;

	d->owner = malloc(sizeof(owner));
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = owner;
	d->age = age;

	return (d);
}
