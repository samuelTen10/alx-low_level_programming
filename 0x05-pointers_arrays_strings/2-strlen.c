#include "main.h"

/**
 * int _strlen - return the length of a string
 *
 * @n: input string parameter
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
