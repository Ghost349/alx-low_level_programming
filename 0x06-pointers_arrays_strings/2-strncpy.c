#include "main.h"
/**
 *_strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n : input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int kez;

	kez = 0;
	while (kez < n && src[kez] != '\0')
	{
	dest[kez] = src[kez];
	kez++;
	}
	while (kez < n)
	{
	dest[kez] = '\0';
	kez++;
	}

	return (dest);
}
