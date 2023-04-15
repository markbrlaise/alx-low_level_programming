#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - search for a value in an array
 *
 *  @array: input array
 *  @size: size of array
 *  @value: value to search for
 *  Return: first index where value is found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (*(array + i) != value)
	{
		printf("Value checked array[%u] = [%d]\n", i, *(array + i));
		i++;
	}
	if (i < size)
		return (i);
	return (-1);
}
