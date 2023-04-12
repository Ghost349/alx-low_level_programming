#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and initializes it with a special char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	unsigned int max;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

	return (NULL);

	max = 0;
	for (; max < size; max++)

	str[max] = c;

	return (str);
}
