#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that gets ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int red = 0;
	int gin = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[red] != '\0')
	{
		red++;
	}

	while (s2[gin] != '\0')
		gin++;

	conct = malloc(sizeof(char) * (red + gin + 1));

	if (conct == NULL)
		return (NULL);
	gin = red = 0;
	while (s1[red] != '\0')
	{
		conct[red] = s1[red];
		red++;
	}
	while (s2[gin] != '\0')
	{
		conct[red] = s2[gin];
	red++, gin++;
	}
	conct[red] = '\0';
	return (conct);
}
