#include <stdio.h>
/**
 * main - a program that prints the alphabet using the putchar function
 * Return: 0 (success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar(ch);
}
putchar('\n');
return (0);
}
