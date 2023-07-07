#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: num of arguments
 * @argv: arry of pointers
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[agrc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%\n", sum);
	return (0);
}
