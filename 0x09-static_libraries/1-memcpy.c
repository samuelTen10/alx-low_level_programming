#include "main.h"

/**
 * _memcpy - copies a block of memory from one place to another
 *
 * @dest: block memory place
 * @src: source of bock
 * @n: length of the source to be copied
 *
 * Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

