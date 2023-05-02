#include <stdlib.h>
#include "main.h"

/**
 *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: An address to the memory recently allocated by malloc
 * @old_size: size of the allocated memory for the address
 * @new_size: new size of the new memory block
 *
 * Return: An address to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mic;
	char *pod;
	unsigned int op;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	mic = malloc(new_size);
	if (!mic)
		return (NULL);

	pod = ptr;

	if (new_size < old_size)
	{
		op = 0;
		for (; op < new_size; op++)
			mic[op] = pod[op];
	}

	if (new_size > old_size)
	{
		op = 0;
		for (; op < old_size; op++)
			mic[op] = pod[op];
	}

	free(ptr);
	return (mic);
}
