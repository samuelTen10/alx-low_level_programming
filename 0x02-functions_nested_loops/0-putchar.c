#include "stdio.h"

/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_ptuchar('\n');

	return (0);
}