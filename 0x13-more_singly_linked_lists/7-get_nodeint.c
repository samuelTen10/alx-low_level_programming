#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns the nth node of a list
 *
 * @head: pointer
 * @index: index of node
 *
 * Return: Always 0.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;

	return (node);
}
