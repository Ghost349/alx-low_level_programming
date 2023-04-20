#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
		int rug, d;

		char *arr;

		if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
		rug = atoi(argv[1]);
		if (rug < 0)
	{
		printf("Error\n");
		exit(2);
	}
		arr = (char *)main;
	d = 0;
	for (; d < rug; d++)
	{
		if (d == rug - 1)
	{
		printf("%02hhx\n", arr[d]);
		break;
	}
	printf("%02hhx ", arr[d]);
	}
	return (0);
}
