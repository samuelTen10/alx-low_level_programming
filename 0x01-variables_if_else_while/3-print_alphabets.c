#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: lowercase alphabet
 *
 * Return: always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(ch);
		CH++;
	}
	putchar('\n');

	return (0);
}
