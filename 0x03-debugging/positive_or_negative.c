#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Using the program to assign a number the variable n
* Return:(0) (success)
*/
void positive_or_negative(int i)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
