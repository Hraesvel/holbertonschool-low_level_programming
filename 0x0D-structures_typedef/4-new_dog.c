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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	if(name)
		d->name = name;
	else
		d->name = NULL;

	d-> age = age;

	if(owner)
		d->owner = owner;
	else
		d->owner = NULL;

	return (d);
}
