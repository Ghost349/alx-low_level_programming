#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *link;

	int kez, lor;

	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)

	s2 = "";

	kez = 0;
	lor = 0;

	while (s1[kez] != '\0')

	kez++;

	while (s2[lor] != '\0')

	lor++;

	link = malloc(sizeof(char) * (kez + lor + 1));

	if (link == NULL)

	return (NULL);

	kez = 0;
	lor = 0;

	while (s1[kez] != '\0')

	kez++;

	return (link);
}
