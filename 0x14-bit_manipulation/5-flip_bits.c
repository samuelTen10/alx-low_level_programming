#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *
 * @n: the first number
 * @m: the second number
 *
 * Return: Always 0.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count = 0;

	while (num)
	{
		if (num & 1ul)
			count++;
		num = num >> 1;
	}

	return (count);
}
