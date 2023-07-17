#include "dog.h"

/**
 * init_dog - init's a dog
 *
 * @d: the dog to be init
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner
 *
 * Return: Always 0.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
