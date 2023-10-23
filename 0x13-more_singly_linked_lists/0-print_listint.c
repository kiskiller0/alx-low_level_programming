#include <stdio.h>

/**
 * print_listint - asdasd
 * @h: the head of the nodes
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h)
	{
		printf("%d\n", h->n);
		return (1 + print_listint(h->next));
	}
}
