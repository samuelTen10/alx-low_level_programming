#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: Always 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num;
	char buff[READ_BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == 1)
		return (0);

	num = read(file, &buff[0], letters);
	num = write(STDOUT_FILENO, &buff[0], bytes);
	close(file);

	return (num);
}
