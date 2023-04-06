#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - function that prints a string followed by a new line
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
