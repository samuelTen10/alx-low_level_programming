#include "main.h"

/**
 * print_to_98 - prints n to the 98 counts
 *
 *@n: takes in integer as input
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
