#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - inserts a new node at a given postition
 *
 * @head: pointer
 * @idx: index of the list
 * @n: new node value
 *
 * Return: Always 0.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newNode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	node = *head;

	while (node)
	{
		if (i == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		i++;
		node = node->next;
	}
	free(newNode);

	return (NULL);
}
