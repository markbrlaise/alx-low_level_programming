#include <stdlib.h>

/**
 *create_array - function to create an array of characters
 *
 * @c: character to fill array
 * @size: size of the array
 *
 *Return: s(created array)
 */

char *create_array(unsigned int size, char c)
{
	int *s;
	int i = 0;

	if (size == 0)
		return NULL;
	s = malloc(size * sizeof(unsigned int))
	while (i < size)
	{
		s[i] = c;
		++i;
	}
	return (s);
}
