#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int kev;

	kev = 0;

	for (; kev < height; kev++)

	{

		free(grid[kev]);

	}

	free(grid);
}
