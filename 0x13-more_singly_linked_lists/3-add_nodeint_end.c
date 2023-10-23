#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - asdasd
 * @head: the head of the nodes
 * @n: the n field of the newly created node
 * Return: the number of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (!*head || !*head->next)
	{
		new = malloc(sizeof(listint));

		if (!new)
			return (NULL);

		new->n;
		new->next = *head;
		if (!*head)
			*head = new;
		else
			*head->next = new;

		return (new);
	} 
	else
	{
		return (&(*head->next), n);
	}
}
