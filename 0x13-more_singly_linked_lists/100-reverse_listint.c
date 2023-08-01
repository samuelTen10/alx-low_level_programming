#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *reverse_listint - reverses a linked list
 *
 * @head: pointer
 *
 * Return: Always 0.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
