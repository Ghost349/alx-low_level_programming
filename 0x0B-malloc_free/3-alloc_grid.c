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

	int dis;
	int ash;

	if (width <= 0 || height <= 0)

	return (NULL);
	max = malloc(height * sizeof(int *));
	if (max == NULL)
	return (NULL);
	dis = 0;
	for (; dis < height; dis++)
	{
	max[dis] = malloc(width * sizeof(int *));
	if (max[dis] == NULL)
	{
	dis = 0;
	for (; dis >= 0; dis--)
	free(max[dis]);
	free(max);
	return (NULL);
	}
	}
	for (dis = 0; dis < height; dis++)
	{
	for (ash = 0; ash < width; ash++)
	{
	max[dis][ash] = 0;
	}
	}
	return (max);
}
