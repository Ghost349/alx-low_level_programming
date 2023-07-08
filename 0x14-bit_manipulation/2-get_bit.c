#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: The binary to attach to the index position.
 * @index: The position of the bit that launches the string from 0.
 *
 * Return: index value or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitwise_git;

	if (index > 63)
		return (-1);
	bitwise_git = (n >> index) & 1;

	return (bitwise_git);
}
