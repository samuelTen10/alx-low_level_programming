#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return length of string
 *
 * @s: string
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
	int string = 0;

	if (!s)
		return (0);

	while (*s++)
		string++;

	return (string);
}

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: text to be written
 *
 * Return: Always 0.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (len)
		byte = write(file, text_content, len);
	close(file);

	return (byte == len ? 1 : -1);
}
