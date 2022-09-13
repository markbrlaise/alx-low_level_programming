#include "main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	if (n < 0)
		n = n* (-1);
	n = n % 10;
	_putchar(n + 48);
	return (n);
}
