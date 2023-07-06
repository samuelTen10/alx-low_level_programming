#include "main.h"

/**
 * lastIndex - return last index of a string
 *
 * @s: pointer to the string
 *
 * Return: integer
*/

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);
int lastIndex(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += lastIndex(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string to be checked
 *
 * Return: Always 0.
*/

int is_palindrome(char *s)
{
	int end = lastIndex(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checks for palindrome
 *
 * @s: input string
 * @start: int moves rigth to left
 * @end: int moves left to right
 * @mod: int
 *
 * Return: Always 0.
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check(s, start + 1, end - 1, mod));
	}
}
