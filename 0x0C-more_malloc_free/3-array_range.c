#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of int
 *
 * @min: min integer
 * @max: max int
 *
 * Return: Always 0.
*/

int *array_range(int min, int max)
{
	int L, i;
	int *p;

	if (min > max)
		return (NULL);
	L = max - min + 1;
	p = malloc(sizeof(int) * L);

	if (!p)
		return (NULL);
	for (i = 0; i < L; i++)
		p[i] = min++;
	return (p);
}
