#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int p = 0, w = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	len1++;
	while (s2 && s2[len2])
	len2++;
	if (n < len2)
	t = malloc(sizeof(char) * (len1 + n + 1));
	else
	t = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!t)
	return (NULL);
	while (p < len1)
	{
	t[p] = s1[p];
	p++;
	}
	while (n < len2 && p < (len1 + n))
	t[p++] = s2[w++];
	while (n >= len2 && p < (len1 + len2))
	t[p++] = s2[w++];
	t[p] = '\0';
	return (t);
}
