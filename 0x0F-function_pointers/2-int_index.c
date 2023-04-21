#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @cmp: pointer to function of one of the 3 main
 * @size: size of the array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int gm;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	gm = 0;
	for (; gm < size; gm++)
	{
		if (cmp(array[gm]))
		return (gm);
	}
	return (-1);
}
