#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: Always 0.
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
