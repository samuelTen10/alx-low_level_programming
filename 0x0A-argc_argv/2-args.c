#include <stdio.h>

/**
 * main - Entry point
 *
 * @argv: list
 * @argc: integer
 *
 * Return: Always 0.
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
