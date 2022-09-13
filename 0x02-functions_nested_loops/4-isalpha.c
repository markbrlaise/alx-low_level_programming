#include "main.h"

/**
 *_islower - function to check if the character is an alpha character
 *
 * @c: checks input of the function
 *
 *Return: returns 1 if `c` is an alpha character otherwise always 0(Success)
 *
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}
