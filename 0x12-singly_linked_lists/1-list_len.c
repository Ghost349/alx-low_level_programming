#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: A pointer pointing to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t max = 0;

	while (h)
	{
	max++;
	h = h->next;
	}
	return (max);
}
