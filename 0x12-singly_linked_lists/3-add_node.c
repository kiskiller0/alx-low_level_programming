
#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - prints all nodes in a llist
 * @head: the head
 * @str: the str to add
 * Return: the size(number of nodes)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	if (head)
	{
		add_node_end(&((*head)->next), str);
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	for (len = 0; *str; str++)
		len++;

	new_node->next = *head;
	new_node->len = len;
	*head = new_node;

	return (new_node);
}
