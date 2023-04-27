#include <stdlib.h>
#include "lists.h"

/**
 * free_list -A fucntion that frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *max;

	while (head)
	{
	max = head->next;
	free(head->str);
	free(head);
	head = max;
	}
}
