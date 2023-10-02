#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the standard output
 *
 * @filename: name of file
 * @letters: number of bytes
 *
 * Return: Always 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	byte = read(file, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(file);

	return (byte);
}
