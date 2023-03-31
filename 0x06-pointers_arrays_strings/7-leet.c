
#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int max, kez;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (max = 0; n[max] != '\0'; max++)
	{
		for (kez = 0; kez < 10; kez++)
		{
			if (n[max] == s1[kez])
			{
				n[max] = s2[kez];
			}
		}
	}
	return (n);
}
