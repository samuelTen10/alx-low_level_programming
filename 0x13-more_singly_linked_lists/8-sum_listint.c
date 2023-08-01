#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the datas
 *
 * @head: pointer
 *
 * Return: Always 0.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
