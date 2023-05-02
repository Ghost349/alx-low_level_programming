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
	int eden;
	int will;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(height * sizeof(int *));

	if (pointer == NULL)
		return (NULL);

	eden = 0;
	for (; eden < height; eden++)
	{
		pointer[eden] = malloc(width * sizeof(int));

		if (pointer[eden] == NULL)
		{
			eden = 0;

			for (; eden >= 0; eden--)
				free(pointer[eden]);

			free(pointer);
			return (NULL);
		}
	}

	eden = 0;
	for (; eden < height; eden++)
	{
		will = 0;
		for (; will < width; will++)
		{
			pointer[eden][will] = 0;
		}
	}
	return (pointer);
}
