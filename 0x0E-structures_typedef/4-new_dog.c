#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string set to be evaluated
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int d;

	d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}
/**
 * *_strcpy - A function that copies the string pointed to by src
 * @dest: An address to the buffer used to copy the string
 * @src: string being copied
 *
 * Return: the address to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, d;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	d = 0;
	for (; d < len; d++)
	{
		dest[d] = src[d];
	}
	dest[d] = '\0';

	return (dest);
}
/**
 * new_dog -a fucntion that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: address to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *rex;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	rex = malloc(sizeof(dog_t));
	if (rex == NULL)
		return (NULL);

	rex->name = malloc(sizeof(char) * (len1 + 1));
	if (rex->name == NULL)
	{
		free(rex);
		return (NULL);
	}
	rex->owner = malloc(sizeof(char) * (len2 + 1));
	if (rex->owner == NULL)
	{
		free(rex);
		free(rex->name);
		return (NULL);
	}
	_strcpy(rex->name, name);
	_strcpy(rex->owner, owner);
	rex->age = age;

	return (rex);
}
