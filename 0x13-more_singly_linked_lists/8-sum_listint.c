#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - return the sum of all data
 * @head: the head of the nodes
 * Return: the sum of all data
 */

int sum_listint(listint_t *head)
{
	if (head)
		return (head->n + sum_listint(head->next));

	return (0);
}
