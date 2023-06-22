#include"main.h"

/**
 * jack_bauer - prints the minutes in a day
 *
*/

void jack_bauer(void)
{
	int min, hr;

	for (min = 0; min <= 59; min++)
	{
		_Putchar((hr / 10) + 48);
		_Putchar((hr % 10) + 48);
		_Putchar(':');
		_Putchar((min / 10) + 48);
		_Putchar((min % 10) + 48);
		_Putchar('\n');
	}
}
