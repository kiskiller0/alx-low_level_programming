


#include "main.h"

/**
 *string_toupper - asdasdsa
 *@str: its length
 *Return: nada
 */

char *string_toupper(char *str)
{
	char *head;

	head = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return (head);
}

