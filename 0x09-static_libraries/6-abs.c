#include"main.h"

/**
 * _abs - a function that calculate the absolute value
 *
 * @n: takes in integer type input
 *
 * Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
