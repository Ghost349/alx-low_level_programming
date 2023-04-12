#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dod;

	int jack, kami = 0;

	if (str == NULL)

	return (NULL);

	jack = 0;

	while (str[jack] != '\0')

	jack++;

	dod = malloc(sizeof(char) * (jack + 1));

	if (dod == NULL)

	return (NULL);

	kami = 0;

	for (; str[kami]; kami++)

	dod[kami] = str[kami];

	return (dod);
}
