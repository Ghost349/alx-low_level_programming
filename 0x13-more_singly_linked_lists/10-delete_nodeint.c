#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: Address to the first element in the list
 * @index: index of the node set to be deleted
 *
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int dub = 0;
	listint_t *old = *head;
	listint_t *past = NULL;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		dub = 0;
		for (; dub < (index - 1) && old != NULL; dub++)
		{
			old = (*old).next;
		}
	}
	while (dub < index - 1)
	{
		if (!old || !(old->next))
		return (-1);
		old = old->next;
		dub++;
	}
	past = old->next;
	old->next = past->next;
	free(past);
	return (1);
}
