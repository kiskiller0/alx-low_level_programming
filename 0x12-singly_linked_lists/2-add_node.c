#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - prints all nodes in a llist
 * @head: the head
 * @str: the str to add
 * Return: the size(number of nodes)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
