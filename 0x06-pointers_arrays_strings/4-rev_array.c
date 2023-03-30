#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int max;
	int jeff;

	for (max = 0; max < n--; max++)
	{
		jeff = a[max];
		a[max] = a[n];
		a[n] = jeff;
	}
}
