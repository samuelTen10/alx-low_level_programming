#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close file %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Always 0.
*/

int main(int ac, char **av)
{
	int fileFrom = 0, fileTo = 0;
	ssize_t n;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fileFrom = open(av[1], O_RDONLY);
	if (fileFrom == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	fileTo = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fileTo == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((n = read(fileFrom, buf, READ_BUF_SIZE)) > 0)
		if (write(fileTo, buf, n) != n)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (n == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fileFrom = close(fileFrom);
	fileTo = close(fileTo);
	if (fileFrom)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fileFrom), exit(100);
	if (fileTo)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fileFrom), exit(100);

	return (EXIT_SUCCESS);
}
