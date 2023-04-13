#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int fun, t, d;

	fun = 0;

	d = 0;

	for (t = 0; s[t] != '\0'; t++)
	if (s[t] == ' ')
	fun = 0;
	else if (fun == 0)
	{
	fun = 1;
	d++;
	}
	return (d);
}
/**
 *strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **max, *tea;
	int w, pole = 0, leno = 0, words, f = 0, start, end;

	while (*(str + leno))
	leno++;
	words = count_word(str);
	if (words == 0)
	return (NULL);
	max = (char **) malloc(sizeof(char *) * (words + 1));
	if (max == NULL)
	return (NULL);
	for (w = 0; w <= leno; w++)
	{
	if (str[w] == ' ' || str[w] == '\0')
	{
	if (f)
	{
	end = w;
	tea = (char *) malloc(sizeof(char) * (f + 1));
	if (tea == NULL)
	return (NULL);
	while (start < end)
	*tea++ = str[start++];
	*tea = '\0';
	max[pole] = tea - f;
	pole++;
	f = 0;
	}
	}
	else if (f++ == 0)
	start = w;
	}
	max[pole] = NULL;
	return (max);
}
