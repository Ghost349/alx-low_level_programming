#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int max = 0;

	bob = 0;
	t = 0;
	len = 0;
	g = 0;
	git = 0;

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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
