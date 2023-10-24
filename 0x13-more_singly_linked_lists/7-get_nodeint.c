#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return node number index
 * @head: the head of the nodes
 * @index: the index
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (!index)
		return (head);
	else
		return (get_nodeint_at_index(head->next, --index));
}
