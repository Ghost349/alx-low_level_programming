#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to binary to convert and set bit to 0 at index position.
 * @index: The position starting from 0 to set bit to 0.
 *
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int d;

	if (index > 63)
		return (-1);

	d = (1 << index);

	if (*n & d)
		*n ^= d;

	return (1);
}
