#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - insert a new node at given idx
 * @head: the head of the nodes
 * @idx: the index
 * @n: the value of the new node
 * Return: the node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;

	if (!head)
		return (NULL);

	if (idx == 1)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);

		node->n = n;
		return (node);
	}
	else
		return (insert_nodeint_at_index(&(*head)->next, --idx, n));
}
