#include <stdio.h>
 /**
  * main - printing lines using printf function with a program
  * Return: 0(success)
  */
main()
{
char;
signed char;
int;
short int;
long int;
unsigned int;
float;
double;
long double;
printf("short int is %21d bytes \n", sizeof(short int));
printf("int is %21d bytes \n", sizeof(int));
printf("int * is %21d bytes \n", sizeof(int *));
printf("long int is %21d bytes \n", sizeof(long int));
printf("signed int is %21d bytes \n", sizeof(signed int));
printf("unsigned int is %21d bytes \n", sizeof(unsigned int));
printf("\n");
printf("float is %21d bytes \n", sizeof(float));
printf("float * is %21d bytes \n", sizeof(float *));
printf("double is %21d bytes \n", sizeof(double));
printf("double * is %21d bytes \n", sizeof(double *));
printf("long double is %21d bytes \n", sizeof(long double));
printf("\n");
printf("signed char is %21d bytes \n", sizeof(signed char));
printf("char is %21d bytes \n", sizeof(char));
printf("char * is %21d bytes \n", sizeof(char *));
printf("unsigned char is %21d bytes \n", sizeof(unsigned char));
return (0);
;}
