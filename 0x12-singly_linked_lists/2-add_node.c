#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_node - adds a new node at the beginning of a list
 *
 * @head: address of the new element
 * @str: string field of nodes
 *
 * Return: Always 0.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead = malloc(sizeof(list_t));

	if (!head || !newHead)
		return (NULL);
	if (str)
	{
		newHead->str = strdup(str);

		if (!new_head->str)
		{
			free(newHead);
			return (NULL);
		}
		newHead->len = _strlen(newHead->str);
	}

	newHead->len = _strlen(newHead->str);
	*head = newHead;

	return (newHead);
}
