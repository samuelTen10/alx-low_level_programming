#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *
 * @n: number to be indexed
 * @index: index
 *
 * Return: Always 0.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
