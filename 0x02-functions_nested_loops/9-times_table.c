#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/


void times_table(void)
{
	int rows = 0;
	int columns;

	while (rows < 10)
	{
		columns = 0;
		for (columns = 0; columns < 10; ++columns)
		{
			_putchar((columns * rows) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		++rows;
	}
}
