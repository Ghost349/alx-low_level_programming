#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node.
 * @head: Address to the first node of linked list.
 * @idx: The place to insert a new node.
 * @n: The element to insert in the linked list.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int op;
	listint_t *old;
	listint_t *max = *head;

	old = malloc(sizeof(listint_t));
	if (idx != 0)
	{
		op = 0;
		for (; op < (idx - 1) && max != NULL; op++)
		{
			max = (*max).next;
		}
	}

	if (max == NULL && idx != 0)
		return (NULL);

	if (old == NULL)
		return (NULL);

	(*old).n = n;

	if (idx == 0)
	{
		(*old).next = *head;
		*head = old;
	}
	else
	{
		max = max->next;
	}
	return (NULL);
}
