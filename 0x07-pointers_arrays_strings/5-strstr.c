#include "main.h"
#include <stdio.h>

/**
 * *_strstr - first char of s that is in accept
 * @haystack: string to where to search
 * @needle: set of allowed chars
 *
 * Return: a pointer to the first occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	char *head, *tn;

	if (*haystack == '\0')
		return (NULL);

	head = haystack;

	for (tn = needle; *tn != '\0' && *haystack != '\0'; tn++)
	{
		if (*haystack != *tn)
		{
			return (_strstr(head + 1, needle));
		}

		haystack++;
	}

	if (*tn == '\0')
		return (head);

	return (NULL);
}

