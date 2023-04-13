#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *dtb;
	int g, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	dtb = malloc(sizeof(int) * size);
	if (dtb == NULL)
	return (NULL);
	g = 0;
	for (; min <= max; g++)
	dtb[g] = min++;
	return (dtb);
}
