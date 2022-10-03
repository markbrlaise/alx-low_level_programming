#include <stdlib.h>

/**
 *alloc_grid - function to return a pointer 
 *
 *@width: width of the array
 *@height: height of the array
 *
 *Return: @&a - pointer to the array
 *
 */

int **alloc_grid(int width, int height)
{
	int i;
	int d;
	int *a;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	d = ((width * height) * sizeof(int));
	a = malloc(d);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < d; i++)
		a[i] = 0;
	return (a);
}
