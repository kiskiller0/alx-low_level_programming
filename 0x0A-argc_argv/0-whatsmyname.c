#include <stdio.h>
/**
 * main - print program name + \n
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 for success, otherwise for failure
 */
int main(int argc, char *argv[])
{
	argc = argc - 1 + 1;

	printf("%s\n", argv[0]);
	return (0);
}

