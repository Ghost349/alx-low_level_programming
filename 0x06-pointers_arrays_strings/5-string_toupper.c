#include "main.h"
/**
 *_string - change all lowercase letters of a string to uppercase
 *@n: pointer
 *
 *Return: n
 */

char *string_toupper(char *n)
{
	int max;

	max = 0;
	while (n[max] != '\0')
	{
	if (n[max] >= 'a' && n[max] <= 'Z')
		n[max] = n[max] - 32;
	max++;
	}
	return (n);
}
