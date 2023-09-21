#include "main.h"

/**
 *rot13 - shift every char 13 position
 *@str: the string
 *Return: nada
 */

char *rot13(char *str)
{
	char *head, *s;

	head = str;
	s = str;

	while (*s != '\0')
	{
		if (*s + 13 > 'z' || (*s < 'a' && *s + 13 > 'Z'))
			*s -= ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) ? 13 : 0;
		else
			*s += ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) ? 13 : 0;

		s++;
	}

	return (head);
}
