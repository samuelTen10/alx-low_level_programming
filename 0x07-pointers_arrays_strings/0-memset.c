#include "main.h"

/**
 * _memset - fill a block of memory with a specified value
 *
 * @s: pointer for the constant
 * @b: the constant number
 * @n: maximum number of bytes
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
