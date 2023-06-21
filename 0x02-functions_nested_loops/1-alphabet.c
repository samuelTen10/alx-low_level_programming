#include "stdio.h"

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase
 *
 * return: 0 (success)
*/

void print_alphabet(void);
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_ptuchar(ch);
	_putchar('\n');

	return (0);
}
