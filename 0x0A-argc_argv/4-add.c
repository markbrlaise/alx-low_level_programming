#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *isNum - function to check whether a string is numeric
 *
 * @num: string to be checked
 *
 * Return: 0(success exit)
 *         1(failure exit)
 */

int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
		else
			return (0);
	}
}


/**
 *main - function to print sum of numbers
 *
 *@argc: counter
 *@argv: arguments
 *
 *Return: 0(for a success exit
 *	  1 (for a failure exit)
 *
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
