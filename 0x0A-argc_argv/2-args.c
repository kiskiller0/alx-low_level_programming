

#include <stdio.h>
/**
 * main - print program name + \n
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 for success, otherwise for failure
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

