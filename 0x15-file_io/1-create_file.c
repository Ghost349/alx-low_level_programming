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
	int mx, ke, length = 0;


	if (filename == NULL)
		return (-1);

	mx = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (mx == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (length = 0; text_content[length]; length++)
			;
	ke = write(mx, text_content, length);

	if (ke == -1)
		return (-1);

	close(mx);

	return (1);
}
