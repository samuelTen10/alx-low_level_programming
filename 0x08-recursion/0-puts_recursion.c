#include "main.h"

/**
 * _puts_recursion - a recursive implementation that prints a string
 *
 * @s: pointer to the input string
 *
 * Return: Always 0.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
}
