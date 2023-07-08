#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: The number to be  converted to binary.
 *
 * Return: void or '0'
 */

void print_binary(unsigned long int n)
{
	unsigned long int numb;
	int x, count;

	for (x = 63; x >= 0; x--)
	{
		numb = n >> x;

		if (numb & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
