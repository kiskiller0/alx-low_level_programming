#include "main.h"

/**
 *leet - asdasdsa
 *@str: its length
 *Return: nada
 */

char *leet(char *str)
{
	char *head;

	char *table1;
	char *table2;

	int i;

	table1 = "aAeEoOtTlL";
	table2 = "4433007711";

	head = str;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (table1[i] == *str)
			{
				*str = table2[i];
				break;
			}
		}
		str++;
	}

	return (head);
}

