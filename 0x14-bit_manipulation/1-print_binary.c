#include "main.h"

/*
 * print_binary - prints the binary representation of a number
 *
 * @n: number to be printed
 *
 * Return: Always 0.
*/

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, prt = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			prt++;
		}
		else if (prt)
			_putchar('0');
	}
	if (!prt)
		_putchar('0');
}
