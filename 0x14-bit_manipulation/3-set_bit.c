#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit at a given index
 *
 * @n: number
 * @index: index
 *
 * Return: Always 0.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return (!!(*n |= 1L << index));
}
