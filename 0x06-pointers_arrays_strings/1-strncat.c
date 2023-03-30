#include "main.h"
/**
 * _strnc - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int max;
	int kez;

	max = 0;
	while (dest[max] != '\0')
	{
	max++;
	}
	kez = 0;
	while (kez < n && src[kez] != '\0')
	{
	dest[max] = src[kez];
	max++;
	kez++;
	}
	dest[max] = '\0';
	return (dest);
}
