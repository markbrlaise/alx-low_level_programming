#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + 48);
			_putchar(',');
			_putchar(' ');
			--n;
		}
	}
	else 
	{
		while (n <= 98)
		{
			_putchar(n + 48);
			_putchar(',');
			_putchar(' ');
			++n;
		}
	}
	_putchar('\n');
}
