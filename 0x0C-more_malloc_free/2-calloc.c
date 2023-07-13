#include "main.h"

/**
 * _memset - fills the memory
 *
 * @s: pointer
 * @b: constant
 * @n: maximum bytes
 *
 * Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;

	return (p);
}

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array length
 * @size: size
 *
 * Return: Always 0.
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
