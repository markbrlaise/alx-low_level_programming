#include <unistd.h>

/**
 *
 *_putchar - writes the character c to the stdout
 *
 *@c: character to print
 *
 *return: on success 1
 *-1 is returned on error and errno set appropriately
 */

int _putchar(char c)
	return (write(1, &c, 1));
