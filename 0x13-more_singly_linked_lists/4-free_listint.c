#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *max;

	while (head)
	{
	max = head->next;
	free(head);
	head = max;
	}
}
