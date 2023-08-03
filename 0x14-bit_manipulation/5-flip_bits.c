#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the num of bits needed to flip to get
 *
 * @n: first number
 * @m: second number
 *
 * Return: Always 0.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int y = 0;

	while (x)
	{
		if (x & 1ul)
			y++;
		x = x >> 1;
	}

	return (y);
}
