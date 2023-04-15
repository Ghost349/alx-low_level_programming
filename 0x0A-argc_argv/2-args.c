#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int max;

	max = 0;
	for (; max < argc; max++)
	{
	printf("%s\n", argv[max]);
	}
	return (0);
}
