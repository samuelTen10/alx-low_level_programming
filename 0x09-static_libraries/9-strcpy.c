#include "main.h"

/**
 * *_strcpy - copies the pointed string to str
 *
 * @dest: char type string
 *
 * @src: char type string
 *
 * Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
