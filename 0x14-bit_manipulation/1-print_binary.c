#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a num
 *
 * @n: num
 *
 * Return: Always 0.
*/

void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8, ptd = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			_putchar('1');
			ptd++;
		}

		else if (ptd)
		{
			_putchar('0');
		}
	}

	if (!ptd)
	{
		_putchar('0');
	}
}
