#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 *
 * @a: an array of int
 * @n: input num of bytes
 *
 * Return: always 0
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
