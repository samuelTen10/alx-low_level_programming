#include "main.h"

/**
 * create_array - create an array of characters
 *
 * @size: size of the input array
 * @c: input character
 *
 * Return: Always 0.
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;

	return (n);
}
