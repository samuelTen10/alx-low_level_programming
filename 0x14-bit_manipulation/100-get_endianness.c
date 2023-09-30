#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: Always 0.
*/

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
