#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (int i=0;i<10;i++)
	{
		putchar(i);
		++i;
	}
	putchar('\n');
	return (0);
}
