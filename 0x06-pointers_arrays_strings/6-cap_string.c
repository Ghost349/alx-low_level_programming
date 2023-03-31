#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int kami = 0;

	while (str[kami])
	{
		while (!(str[kami] >= 'a' && str[kami] <= 'z'))
			kami++;

		if (str[kami - 1] == ' ' ||
		    str[kami - 1] == '\t' ||
		    str[kami - 1] == '\n' ||
		    str[kami - 1] == ',' ||
		    str[kami - 1] == ';' ||
		    str[kami - 1] == '.' ||
		    str[kami - 1] == '!' ||
		    str[kami - 1] == '?' ||
		    str[kami - 1] == '"' ||
		    str[kami - 1] == '(' ||
		    str[kami - 1] == ')' ||
		    str[kami - 1] == '{' ||
		    str[kami - 1] == '}' ||
		    kami == 0)
			str[kami] -= 32;

		kami++;
	}

	return (str);
}
