#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z 10 times
*/

void print_alphabet_x10(void)
{
	char ch;
	int i = 10;

	for (i = 0;i < 10;i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			++ch;
		}
		_putchar('\n');
	}
}
