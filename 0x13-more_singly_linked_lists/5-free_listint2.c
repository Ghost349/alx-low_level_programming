#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *max;

	if (head == NULL)
	return ;

	while (*head)
	{
	max = (*head)->next;
	free(*head);
	*head = max;
	}
	*head = NULL;
}
