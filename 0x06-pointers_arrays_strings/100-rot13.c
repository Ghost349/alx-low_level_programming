#include "main.h"
#include <stdio.h>
/**
 *rot13 - encoder rot13
 *@s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int essy;
	int julius;
	char data1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (essy = 0; s[essy] != '\0'; essy++)
	{
		for (julius = 0; julius < 52; julius++)
			{
			if (s[essy] == data1[julius])
			{
				s[essy] = datarot[julius];
				break;
			}
		}
	}
	return (s);
}

