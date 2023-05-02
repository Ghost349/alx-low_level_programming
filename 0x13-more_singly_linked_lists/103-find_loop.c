#include "lists.h"
/**
 * find_listint_loop - A fucntion that finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *smooth = head;
	listint_t *criminal = head;

	if (head == NULL)
	return (NULL);

	while (smooth && criminal && criminal->next)
	{
	criminal = criminal->next->next;
	smooth = smooth->next;
	if (criminal == smooth)
	{
	smooth = head;
	while (smooth != criminal)
	{
	smooth = smooth->next;
	criminal = criminal->next;
	}
	return (criminal);
	}
	}
	return (NULL);
}
