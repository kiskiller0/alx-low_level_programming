#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - asdasd
 * @head: the head of the nodes
 * Return: the number of nodes
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&(*head)->next);
		free(*head);
	}
}
