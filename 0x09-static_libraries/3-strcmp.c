#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: input value
 *@s2: input value
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
        int max;

        max = 0;
        while (s1[max] != '\0' && s2[max] != '\0')
        {
        if (s1[max] != s2[max])
        {
        return (s1[max] - s2[max]);
        }
        max++;
        }
return (0);
}
