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
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: Always 0.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t num = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (len)
		num = write(file, text_content, len);
	close(file);

	return (num == len);
}
