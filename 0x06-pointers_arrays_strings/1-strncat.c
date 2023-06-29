#include "main.h"

/**
 * _strncat - function used to concatenate a specified num of char
 *
 * @dest: pointer to the des input
 * @src: pointer to the source input
 * @n: input num of bytes
 *
 * Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = scr[i];
	dest[c + i] = '\0';

	return (dest);
}
