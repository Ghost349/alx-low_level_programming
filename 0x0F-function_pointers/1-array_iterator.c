#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - that executes a function given as a parameter
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int max;

	if (array == NULL || action == NULL)
		return;
	max = 0;
	for (; max < size; max++)
	{
	action(array[max]);
	}
}
