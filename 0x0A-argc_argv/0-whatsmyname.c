#include <stdio.h>

/**
 *main - function to print name of the program
 *
 *@argc: argument count
 *@argv: argument vectors
 *
 *Return: (0) success exit
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);

	return (0);
}
