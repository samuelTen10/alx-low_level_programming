#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of string
 *
 * @s: string
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}
	while (*s++)
	{
		i++;
	}

	return (i);
}

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer
 *
 * Return: Always 0.
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}
