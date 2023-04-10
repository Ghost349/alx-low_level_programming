#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest:original area where memory is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int max = 0;
        int steve = n;

        for (; max < steve; max++)
        {
                dest[max] = src[max];
                n--;
        }
        return (dest);
}
