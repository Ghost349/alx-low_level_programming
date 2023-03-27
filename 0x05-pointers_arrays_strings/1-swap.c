#include "main.h"

/**
 * swap_int - write a fucntion that swaps the values of two intergers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
