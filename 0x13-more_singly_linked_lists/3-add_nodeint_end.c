#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint_end - adds a new node at the end
 *
 * @head: pointer
 * @n: new node value
 *
 * Return: Always 0.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (!*head)
		*head = newNode;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = newNode;
	}

	return (newNode);
}
