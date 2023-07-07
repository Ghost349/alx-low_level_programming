#include "main.h"

/**
 * binary_to_uint - A function that converts binary to unsigned intergers.
 * @b: The pointer pointing to a string of 0 and 1 chars.
 *
 * Return: converted number or '0' instead.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int kez;

	if (!b)
		return (0);
	for (kez = 0; b[kez]; kez++)
	{
		dec = 2 * dec + (b[kez] - '0');
		if (b[kez] > '1' || b[kez] < '0')
			return (0);

	}
	return (dec);
}
