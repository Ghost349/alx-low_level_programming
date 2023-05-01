#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *kami = head;

	while (kami && t < index)
	{
	kami = kami->next;
	t++;
	}
	if (kami == NULL)
		return (NULL);
	return (kami ? kami : NULL);
}
