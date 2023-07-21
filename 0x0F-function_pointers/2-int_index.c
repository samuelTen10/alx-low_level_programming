#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: arrays
 * @size: num of elements in the array
 * @cmp: pointer to the function
 *
 * Return: Always 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
