#include <stdio.h>
/**
 * main - a program that prints the alphabet using the putchar function
 * Return: 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar (ch);
}
putchar('\n');
return (0);
}
