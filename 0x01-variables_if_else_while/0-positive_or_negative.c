#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 /**
  * main - using the program to assign a number the variable n
  * return (1) (success)
  * return (0) (neutral/draw)
  * return (-1) (failure)
  */
int main(void)
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
