#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a linked list
 * @head: A double pointer pointing to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *low;
	list_t *max = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	low = malloc(sizeof(list_t));
	if (!low)
	return (NULL);

	low->str = strdup(str);
	low->len = len;
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
