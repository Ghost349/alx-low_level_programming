#include "lists.h"
/**
 * reverse_listint - a function reverses a linked list
 * @head: A double address to the first node
 *
 * Return: An pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *down = NULL;
	listint_t *top = NULL;

	while (*head)
	{
		top = (**head).next;
		(**head).next = down;
		down = *head;
		*head = top;
	}
	*head = down;

	return (*head);
}
