#include "lists.h"

/**
 * sum_listint - A function calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: add of data(n)
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *max = head;

	while (max)
	{
	add = add + max->n;
	max = max->next;
	}
	return (add);
}
