#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - prints all nodes in a llist
 * @h: the head
 * Return: the size(number of nodes)
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;

	for (; h; h = h->next)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		num++;
	}

	return (num);
}
