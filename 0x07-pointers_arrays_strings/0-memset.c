#include "main.h"
/**
 * _memset - fill a memory with a constant byte
 * @s: original address of the memory to be filled
 * @b : constant byte
 * @n : number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int kipp = 0;

	for (; n > 0; kipp++)
	{
		s[kipp] = b;
		n--;
	}
	return (s);
}
