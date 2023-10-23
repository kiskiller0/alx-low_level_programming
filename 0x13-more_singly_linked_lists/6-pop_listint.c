#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - asdasd
 * @head: the head of the nodes
 * Return: the number of nodes
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	*head = (*head)->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
