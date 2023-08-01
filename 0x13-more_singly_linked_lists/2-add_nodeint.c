#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning
 *
 * @head: pointer
 * @n: new nodes value
 *
 * Return: Always 0.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->n = n;

	if (*head)
		newNode->next = *head;
	*head = newNode;

	return (newNode);
}
