#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 * @h: An address to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t low = 0;
	listint_t *kev;
	int rika;

	if (!h || !*h)
		return (0);
	while (*h)
	{
	rika = *h - (*h)->next;

	if (rika > 0)
	{
		kev = (*h)->next;
		free(*h);
		*h = kev;
		low++;
	}
	else
	{
		free(*h);
		*h = NULL;
		low++;
	break;
	}
	}
	*h = NULL;
	return (low);
}
