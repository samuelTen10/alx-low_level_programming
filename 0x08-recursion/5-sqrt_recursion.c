#include "main.h"

/**
 * _sqrt_recursion - recursive imp of calculating the square root of int
 *
 * @n: input integer
 * @val: value of squ root
 *
 * Return: Always 0.
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds square root value
 *
 * @n: input integer
 * @val: square root
 *
 * Return: integer
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	if (val * val < n)
		return (square(n, val + 1));
	else
		return(-1);
}
