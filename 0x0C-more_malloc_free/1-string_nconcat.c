#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - malloc stuff
 * @s1: s1
 * @s2: s2
 * @n: n letters of s2 that should be concatenated with s1
 * Return: a pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_s1, *ptr_s2, *ptr_result, *ptr_result_head;
	unsigned int letter_count, counter;

	ptr_s1 = s1;

	if (s1)
		for (letter_count = 0; *ptr_s1; ptr_s1++)
			letter_count++;


	ptr_result = malloc(sizeof(char) * (letter_count + n + 1));
	ptr_result_head = ptr_result;

	if (!ptr_result)
		return (NULL);

	if (s1)
		for (ptr_s1 = s1; *ptr_s1; ptr_s1++)
		{
			*ptr_result = *ptr_s1;
			ptr_result++;
		}

	ptr_s2 = s2;

	if (s2)
		for (counter = 0; counter < n && *ptr_s2; counter++)
		{
			*ptr_result = *ptr_s2;
			ptr_result++;
			ptr_s2++;
		}

	*ptr_result = 0;

	return (ptr_result_head);
}

