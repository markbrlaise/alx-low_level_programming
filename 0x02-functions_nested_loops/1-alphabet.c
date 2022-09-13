#include "main.h"
/* more headers goes there */
/**
 *main - Entry point
 *
 *Description: print '_putchar' and a new line
 *
 *Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char ch = 'a';
	while (ch <= 'z')
		_putchar(ch);
}
