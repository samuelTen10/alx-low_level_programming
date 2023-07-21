#include "function_pointers.h"

/**
 * print_name - print the name
 *
 * @name: name of the string
 * @f: function pointer
 *
 * Return: Always 0.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
