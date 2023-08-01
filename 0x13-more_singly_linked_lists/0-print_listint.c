#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements
 *
 * @h: pointer
 *
 * Return: Always 0.
*/

size_t print_listint(const listint_t *h)
{
	size_t idx = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		idx++;
	}
	return (idx);
}
