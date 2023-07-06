#include "main.h"

/**
 * _print_rev_recursion - a recursive imp that prints a string in reverse
 *
 * @s: pointer to the input string
 *
 * Return: Always 0.
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
