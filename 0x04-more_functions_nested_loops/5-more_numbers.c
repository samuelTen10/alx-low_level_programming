#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use funtions
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row <= 10; row++)
	{
		num = count;
		if (count > 9)
		{
			_putchar(1 + 48);
			num = count % 10;
		}
		_putchar(num + 48);
	}
	_puchar('\n');
}
