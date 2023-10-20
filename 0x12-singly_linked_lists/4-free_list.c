#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - prints all nodes in a llist
 * @head: the head
 */

void free_list(list_t *head)
{

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);

}
