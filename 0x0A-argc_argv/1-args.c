#include <stdio.h>

/**
 * main - Entry point
 *
 * @argv: pointer
 * @argc: integer
 *
 * Return: Always 0.
*/

int main(int argc, char *agrv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
