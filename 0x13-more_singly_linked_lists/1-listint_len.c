#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - asdasd
 * @h: the head of the nodes
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	if (h)
		return (1 + listint_len(h->next));
	return (0);
}
