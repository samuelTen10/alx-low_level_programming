#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the number of elements
 *
 * @h: pointer
 *
 * Return: Always 0.
*/

size_t listint_len(const listint_t *h)
{
	size_t ind = 0;

	while (h)
	{
		h = h->next;
		ind++;
	}

	return (ind);
}
