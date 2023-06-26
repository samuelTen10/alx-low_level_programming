#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates password for 101-crackme file
 *
 * Return: nothing
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 123;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);

	return (0);
}
