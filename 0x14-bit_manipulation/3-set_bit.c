#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index.
 * @n: The binary to convert through to the index position.
 * @index: position to set value of the bit to 1.
 *
 * Return: 1 or -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int d;

	if (index > 63)
		return (-1);

	d = (1 << index);
	*n = (d | *n);

	return (1);
}
