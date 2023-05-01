#include "lists.h"

/**
 * listint_len - a function returning the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t max = 0;

	while (h)
	{
	max++;
	h = h->next;
	}
	return (max);
}
