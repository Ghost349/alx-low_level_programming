#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returning pointers to 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **pointer;
	int kev;
	int will;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(height * sizeof(int *));

	if (pointer == NULL)
		return (NULL);

	kev = 0;
	for (; kev < height; kev++)
	{
		pointer[kev] = malloc(width * sizeof(int));

		if (pointer[kev] == NULL)
		{
			kev = 0;
			for (; kev >= 0; kev--)
				free(pointer[kev]);

			free(pointer);
			return (NULL);
		}
	}

	kev = 0;
	for (; kev < height; kev++)
	{
		will = 0;
		for (; will < width; will++)
		{
			pointer[kev][will] = 0;
		}
	}
	return (pointer);
}
