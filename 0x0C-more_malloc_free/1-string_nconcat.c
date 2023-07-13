#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second String
 * @n: num of bytes
 *
 * Return: Always 0.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_L, s2_L;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_L = 0; s1[s1_L] != '\0'; s1_L++)
		;
	for (s2_L = 0; s2[s2_L] != '\0'; s2_L++)
		;

	str = malloc(s1_L + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
