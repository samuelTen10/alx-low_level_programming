#include"main.h"

/**
 * jack_bauer - prints the minutes in a day
*/

void jack_bauer(void)
{
	int min, hr;

	for (min = 0; min <= 59; min++)
	{
		_putchar((hr / 10) + 48);
		_putchar((hr % 10) + 48);
		_putchar(':');
		_putchar((min / 10) + 48);
		_putchar((min % 10) + 48);
		_putchar('\n');
	}
}
