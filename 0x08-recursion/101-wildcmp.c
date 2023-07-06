#include "main.h"

/**
 * mps - iterates past char
 *
 * @s2: second string
 *
 * Return: pointer
*/

char *mps(char *s2)
{
	if (*s2 == '*')
		return (mps(s2 + 1));
	else
		return (s2);
}

/**
 * ipt - changes the string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if true, 0 if false
*/

int ipt(char *s1, char *s2)
{
	int r = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		r += wildcmp(s1 + 1, s2 + 1);
	r += ipt(s1 + 1, s2);

	return (r);
}

/**
 * wildcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if true, 0 if false
*/

int wildcmp(char *s1, char *s2)
{
	int r = 0;

	if (!*s1 && *s2 == '*' && !*mps(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = mps(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			r += wildcmp(s1 + 1, s2 + 1);
		r += ipt(s1, s2);

		return (!*r);
	}

	return (0);
}
