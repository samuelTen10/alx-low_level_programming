#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_node_end - adds a new node at the end of a list
 *
 * @head: address of the new element
 * @str: string
 *
 * Return: Always 0.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !newNode)
		return (NULL);

	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = _strlen(newNode->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
