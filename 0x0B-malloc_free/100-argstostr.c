#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int tom, jerry, bob = 0, gin = 0;
	char *max;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (tom = 0; tom < ac; tom++)
	{
	for (jerry = 0; av[tom][jerry]; jerry++)
	gin++;
	}
	gin += ac;
	max = malloc(sizeof(char) * gin + 1);
	if (max == NULL)
	return (NULL);
	for (tom = 0; tom < ac; tom++)
	{
	for (jerry = 0; av[tom][jerry]; jerry++)
	{
	max[bob] = av[tom][jerry];
	bob++;
	}
	if (max[bob] == '\0')
	{
	max[bob++] = '\n';
	}
	}
	return (max);
}
