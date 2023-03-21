#include <stdio.h>
/**
 * main - a program that prints the alphabet using the putchar function
 * Return: 0 (success)
 */
int main(void)
{
int n;
int q;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (q = 'a'; q <= 'f'; q++)
{
putchar(q);
}
putchar('\n');
return (0);
}
