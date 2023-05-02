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

	old =  malloc(sizeof(listint_t));
	if (!old || !head)
		return (NULL);
	old->n = n;
	old->next = NULL;

	if (idx == 0)
	{
	old->next = *head;
	*head = old;
	return (old);
	}
	op = 0;
	for (; max && op < idx; op++)
	{
	if (op == idx - 1)
	{
	old->next = max->next;
	max->next = old;
	return (old);
	}
	else
	max = max->next;
	}
	return (NULL);
}
