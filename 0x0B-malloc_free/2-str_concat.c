
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - cp a string to a new location n return a pointer
 * @s1: the string to copy
 * @s2: the string to copy
 * Return: a ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	char *head, *head2, *head3;
	int count;

	head = s1;
	head2 = s2;

	for (count = 0; *head; count++)
		head++;
	for (; *head2; count++)
		head2++;

	arr = (char *) malloc(sizeof(char) * count + 1);
	head3 = arr;
	if (!arr)
		return (arr);

	for (; *s1; arr++)
		*arr = *(s1++);
	for (; *s2; arr++)
		*arr = *(s2++);

	*arr = 0;

	return (head3);
}

