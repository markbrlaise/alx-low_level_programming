#include <stdio.h>
#include <stdlib.h>

/**
 *main - function to multiply two numbers
 *
 *@argc: argument counter
 *@argv: arguments
 *
 * Return: (0)success exit
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int m;

		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
