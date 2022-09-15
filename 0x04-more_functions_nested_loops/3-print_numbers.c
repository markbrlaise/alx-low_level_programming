#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		++num;
	}
	_putchar('\n');
}
