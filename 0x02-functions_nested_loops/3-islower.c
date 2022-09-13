#include "main.h"

/**
 * check if a character is lowercase or not
 *
*/

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
