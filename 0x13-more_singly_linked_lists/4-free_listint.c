#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - asdasd
 * @head: the head of the nodes
 * @n: the n field of the newly created node
 * Return: the number of nodes
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
