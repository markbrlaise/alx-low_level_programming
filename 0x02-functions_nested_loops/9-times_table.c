#include "main.h"

/**
 * 9 times table
*/


void void_times_table(void)
{
	int rows = 0;
	int columns, multiple;

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
