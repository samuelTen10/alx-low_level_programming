#include "main.h"

/**
 * _pow_recursion - recursive imp of calculating the power of int
 *
 * @x: base
 * @y: exponent
 *
 * Return: Always 0.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
