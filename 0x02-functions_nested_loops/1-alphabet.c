#include "main.h"
/**
 * main - a program that prints the alphabet using the putchar function
 * Return: 0 (success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
