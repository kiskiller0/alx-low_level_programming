



#include "main.h"

/**
 *cap_string - asdasdsa
 *@str: its length
 *Return: nada
 */

char *cap_string(char *str)
{
	char *head;
	int previous_is_space;

	previous_is_space = 1;
	head = str;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '.')
		{
			previous_is_space = 1;
			str++;
			continue;
		}

		if (*str >= 'a' && *str <= 'z')
		{
			if (previous_is_space)
			{
				*str = *str - 'a' + 'A';
			}
		}
		previous_is_space = 0;
		str++;
	}

	return (head);
}

