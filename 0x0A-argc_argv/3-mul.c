#include <stdio.h>

/**
 *main - print program name + \n
 *@argc: arguments count
 *@argv: arguments
 *Return: 0 for success, otherwise for failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (0);
	}

	printf("%d\n", (*argv[1] - '0') * (*argv[2] - '0'));
	return (0);
}
