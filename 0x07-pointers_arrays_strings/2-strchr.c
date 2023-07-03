#include "main.h"

/**
 * _strchr - search for the first occurrence
 *
 * @s: pointer for the constant
 * @c: constant
 *
 * Return: pointer
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
