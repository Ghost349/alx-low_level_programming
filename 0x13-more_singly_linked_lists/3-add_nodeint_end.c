#include "lists.h"
/**
 * add_nodeint_end - a function that adds a node at the end of a linked list
 * @head: address to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *low;
	listint_t *max = *head;

	low = malloc(sizeof(listint_t));
	if (low == NULL)
		return (NULL);
	low->n = n;
	low->next = NULL;
	if (*head == NULL)
	{
	*head = low;
	return (low);
	}
	while (max->next)
	max = max->next;
	max->next = low;
	return (low);
}
