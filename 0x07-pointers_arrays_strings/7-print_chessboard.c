#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int max;
	int josh;

	for (max = 0; max < 8; max++)
	{
		for (josh = 0; josh < 8; josh++)
			putchar(a[max][josh]);
		putchar('\n');
	}
}
