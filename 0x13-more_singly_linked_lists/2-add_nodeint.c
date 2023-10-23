#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - asdasd
 * @head: the head of the nodes
 * @n: the n field of the newly created node
 * Return: the number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
