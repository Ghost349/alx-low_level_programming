#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - a function that prints a listint_t linked list
 * @head: An address to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *low, *max;
	size_t kami = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	{
		low = head->next;
		max = (head->next)->next;
	}
	while (max)
	{
	if (low == max)
	{
		low = head;
	while (low != max)
	{
		kami++;
		low = low->next;
		max = max->next;
	}
		low = low->next;

	while (low != max)
	{
		kami++;
		low = low->next;
	}
	return (kami);
	}
		low = low->next;
		max = (max->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - a function that guards printing listint_t list.
 * @head: An address to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t kami, robbin = 0;

	kami = looped_listint_len(head);
	if (kami == 0)
	{
	kami = 0;
	for (; head != NULL; kami++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	robbin = 0;
	for (; robbin < kami; robbin++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (kami);
}
