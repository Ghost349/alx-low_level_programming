#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - a fucntion that checkes if string has digits
 * @str: array string
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int cash;

	cash = 0;
	while (cash < strlen(str))
	{
		if (!isdigit(str[cash]))
		{
			return (0);
		}
		cash++;
	}
	return (1);
}
/**
 * main - a fucntion that prints the name of the program
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cash;
	int str_to_int;
	int sub = 0;

	cash = 1;
	while (cash < argc)
	{
		if (check_num(argv[cash]))

		{
			str_to_int = atoi(argv[cash]);
			sub += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		cash++;
	}

	printf("%d\n", sub);

	return (0);
}
