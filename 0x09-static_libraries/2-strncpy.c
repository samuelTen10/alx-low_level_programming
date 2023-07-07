#include "main.h"

/**
 * _strncpy - stdlib function defined in the header
 *
 * @dest: pointer to the des input
 * @src: pointer to the source input
 * @n: input num of bytes
 *
 * Return: #dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
