#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	char ch = 'a';
	int n = 10;

	for (i = 0;i < 10;i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			++ch;
		}
		_putchar('\n');
	}
}
