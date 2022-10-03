#include <stdlib.h>

/**
 *_strdup - function to duplicate a string
 *
 *@str: string to be duplicated
 *
 *Return: @s(duplicate string)
 */

char *_strdup(char *str)
{
	int i;
	int *s;
	int d;
	
	if (str == NULL)
		return (NULL);
	d = 0;
	while (str[d])
		++d;
	s = malloc(d * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < d; i++)
		s[i] = str[i];

	return (s);
}
