#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: Address to the first element in the linked list
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *max;
	int otil;

	if (!head || !*head)
		return (0);
	otil = (*head)->n;
	max = (*head)->next;
	free(*head);
	*head = max;
	return (otil);
}
