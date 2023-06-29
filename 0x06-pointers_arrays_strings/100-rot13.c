#include "main.h"

/**
 * rot13 - replaces each letters in a string with 13 postion ahead or behind
 *
 * @s: input string
 *
 * Return: replaced string
*/

char *rot13(char *)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i =0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s == ROT13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
