
#include <stdio.h>
/**
 * main - print program name + \n
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 for success, otherwise for failure
 */
int main(int argc, char *argv[])
{
	argv[0] = argv[1];

	printf("%d\n", argc);
	return (0);
}

