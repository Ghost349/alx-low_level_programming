#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a linked list
 * @head: A double pointe pointing to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *kami;
	unsigned int len = 0;

	while (str[len])
	len++;

	kami = malloc(sizeof(list_t));
	if (!kami)
	return (NULL);

	kami->str = strdup(str);
	kami->len = len;
	kami->next = (*head);
	(*head) = kami;

	return (*head);
}
