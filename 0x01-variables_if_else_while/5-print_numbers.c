#include <stdio.h>
/**
 * main - a program that prints the alphabet using the putchar function
 * Return: 0 (success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}
