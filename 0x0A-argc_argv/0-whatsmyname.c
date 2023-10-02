#include "main.h"
/**
 * main - print program name + \n
 * @argc: arguments count
 * @argv: arguments
 * Return: 0 for success, otherwise for failure
 */
int main(int argc, char *argv[])
{
	char *ptr;

	ptr = argv[0];

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
	return (0);
}

