#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - fills the memory
 *
 * @s: pointer
 * @b: constant
 * @n: maximum bytes
 *
 * Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
		*s++ = b;

	return (i);
}

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array length
 * @size: size
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
