#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Name of file meant to be opened and read.
 * @letters: Number of letters it to be read and print.
 *
 * Return: Number or letters it could read and print or 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t z, ry;
	int max;

	if (filename == NULL)
		return (0);
	max = open(filename, O_RDONLY);
	if (max == -1)
		return (0);
	buff = malloc((letters) * sizeof(char));
	if (buff == NULL)
		return (0);
	z = read(max, buff, letters);
	ry = write(STDOUT_FILENO, buff, z);

	free(buff);
	close(max);

	return (ry);
}
