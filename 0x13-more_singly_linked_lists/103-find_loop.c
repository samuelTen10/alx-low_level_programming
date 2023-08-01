#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *find_listint_loop - finds the loop
 *
 * @head: pointer
 *
 * Return: Always 0.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			if (ptr == end->next)
				return (end->next);
		}
	}

	return (NULL);
}
