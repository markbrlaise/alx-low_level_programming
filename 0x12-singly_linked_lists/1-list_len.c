#include "lists.h"

/**
 *list_len - gets the number of nodes
 *
 *@h: pointer to the head(first node)
 *
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	/*if h is null return  0 lenght*/
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		/*go to next node*/
		h = h->next;
		/*count node*/
		++node_count;
	}
	return (node_count);
}
