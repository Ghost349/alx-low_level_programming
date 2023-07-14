#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - A function that creates a file.
 * @filename: Name of file to be created.
 * @text_content: String to write in the file to be created.
 *
 * Return: 1 (Success) or -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int max = 0;
	int kez = 0;
	int length = 0;

	max = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (0);
	for (length = 0; text_content[length]; length++)

	if (max == -1)
		return (-1);
	kez = write(max, text_content, length);
	if (kez == -1)
		return (-1);

	close(max);

	return (1);
}
