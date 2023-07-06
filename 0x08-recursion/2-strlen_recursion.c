#include "main.h"

/**
 * _strlen_recursion - a recursive impl to calculate the length
 *
 * @s: pointer to the input string
 *
 * Return: Always 0.
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}

	return (i);
}
