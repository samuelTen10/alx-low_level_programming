#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _r - memory for an array of pointers
 *
 * @list: list to append
 * @new: new list to append
 * @size: size of the list
 *
 * Return: Always 0.
*/

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newList;
	size_t i;

	newList = malloc(size * sizeof(listint_t *));

	if (newList == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newList[i] = list[i];

	newList[i] = new;
	free(list);

	return (newList);
}

/**
 * print_listint_safe - prints a linked list
 *
 * @head: pointer
 *
 * Return: Always 0.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, Num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < Num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (Num);
			}
		}
		Num++;
		list = _r(list, Num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (Num);
}
