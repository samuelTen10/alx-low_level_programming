#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 *
 * @head: pointer
 * @index: index of node
 *
 * Return: Always 0.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *preNode;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (i == index)
		{
			preNode->next = node->next;
			free(node);
			return (1);
		}
		i++;
		preNode = node;
		node = node->next;
	}

	return (-1);
}
