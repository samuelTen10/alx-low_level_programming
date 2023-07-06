#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if the input num is prime num
 *
 * @i: input integer
 * @n: input integer
 *
 * Return: Always 0.
*/

int prime(int n, int i);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - checks the number in < n for a divider
 *
 * @i: input integer
 * @n: input integer
 *
 * Return: integer
*/

int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}
