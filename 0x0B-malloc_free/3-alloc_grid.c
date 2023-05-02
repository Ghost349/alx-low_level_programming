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
	int str_len;
	int will;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(height * sizeof(int *));

	if (pointer == NULL)
		return (NULL);

	str_len = 0;
	for (; str_len < height; str_len++)
	{
		pointer[str_len] = malloc(width * sizeof(int));

		if (pointer[str_len] == NULL)
		{
			str_len = 0;

			for (; str_len >= 0; str_len--)
				free(pointer[str_len]);

			free(pointer);
			return (NULL);
		}
	}

	str_len = 0;
	for (; str_len < height; str_len++)
	{
		will = 0;
		for (; will < width; will++)
		{
			pointer[str_len][will] = 0;
		}
	}
	return (pointer);
}
