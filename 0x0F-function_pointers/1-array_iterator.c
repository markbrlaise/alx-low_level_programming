/**
 *array_iterator - function that executes a function given as a parameter on 
 *on each element of array
 *
 *@array: array
 *@size: size of array
 *@action: pointer to a function action
 *
 *Return: nothing literally cuz its void
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0, i < size, ++i)
			action(array[i]);
}
