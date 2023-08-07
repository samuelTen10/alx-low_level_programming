#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length
 *
 * @s: string
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);

	while (*s++)
		n++;

	return (n);
}

/**
 * create_file - creates a file
 *
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: Always 0.
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t num = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (len)
		num = write(file, text_content, len);
	close(file);

	return (num = len ? 1 : -1);
}
