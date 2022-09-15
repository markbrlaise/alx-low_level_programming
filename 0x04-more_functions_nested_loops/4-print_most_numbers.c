#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice excluding 2 and 4
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		if (num != 40 && num !=42)
		{
			_putchar(num);
			++num;
		}
	}
	_putchar('\n');
}
