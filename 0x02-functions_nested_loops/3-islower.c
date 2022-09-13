#include "main.h"

/**
 * check if a character is lowercase or not
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
