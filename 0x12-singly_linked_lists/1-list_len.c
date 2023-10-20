#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - prints all nodes in a llist
 * @h: the head
 * Return: the size(number of nodes)
 */
size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h; h = h->next)
		num++;

	return (num);
}
