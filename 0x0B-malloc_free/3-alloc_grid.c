#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **max;
	int eden;
	int will;

	if (width <= 0 || height <= 0)
		return (NULL);

	max = malloc(height * sizeof(int *));

	if (max == NULL)
		return (NULL);

	for (eden = 0; eden < height; eden++)
	{
		max[eden] = malloc(width * sizeof(int));

		if (max[eden] == NULL)
		{
			eden = 0;

			for (; eden >= 0; eden--)
				free(max[eden]);

			free(max);
			return (NULL);
		}
	}

	for (eden = 0; eden < height; eden++)
	{
		for (will = 0; will < width; will++)
		{
			max[eden][will] = 0;
		}
	}
	return (max);
}
