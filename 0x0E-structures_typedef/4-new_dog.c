#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - function to get the length of str
 *
 * @str: length of str
 *
 * Return: Always 0.
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - function to return a copy
 *
 *  @src: str to be copied
 *  @dest: place for the copy
 *
 *  Return: Always 0.
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - function for creating a new dog
 *
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Always 0.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
