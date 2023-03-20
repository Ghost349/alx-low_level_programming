#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Using the program to assign a number the variable n
* Return:(0) (success)
*/
int main(void)
{
int n;
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (n > 5)
printf("last digit of %d is %d and is greater than 5\n", n, lastdigit);
if (n == 0)
printf("last digit of %d is %d and is 0\n", n, lastdigit);
if (n < 6 && n > 0)
printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
return (0);
}
