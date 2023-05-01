#include <stdio.h>
#include "main.h"
/**
 * _atoi -a function that converts a string to an integer
 * @s: string to be converted into an integer
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int max, bob, t, len, g, git = 0;

	while (s[len] != '\0')
	len++;
	while (max < len && g == 0)
	{
	if (s[max] == '-')
	++bob;
	if (s[max] >= '0' && s[max] <= '9')
	{
	git = s[max] - '0';
	if (bob % 2)
	git = -git;
	t = t * 10 + git;
	g = 1;
	if (s[max + 1] < '0' || s[max + 1] > '9')
	break;
	g = 0;
	}
	max++;
	}
	if (g == 0)
	return (0);
	return (t);
}
/**
 * main - a function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num3, num4;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	num3 = _atoi(argv[1]);
	num4 = _atoi(argv[2]);
	result = num3 * num4;
	printf("%d\n", result);
	return (0);
}
