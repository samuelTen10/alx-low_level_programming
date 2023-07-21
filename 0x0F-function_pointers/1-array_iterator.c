#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - maps arrays through function pointers
 *
 * @array: arrays
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: Always 0.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
