#include "main.h"

/**
 * _sqrt_recursion - recursive imp of calculating the square root of int
 *
 * @n: input integer
 *
 * Return: Always 0.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	int result = 1;

	while (result * result <= n)
	{
		result++;
	}

	result--;

	return (result);
}
