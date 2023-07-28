#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a list
 *
 * @head: pointer
 *
 * Return: Always 0.
*/

void free_list(list_t *head)
{
	list_t *node, *nextNode;

	if (!head)
	{
		return;
	}
	node = head;

	while (node)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
}
