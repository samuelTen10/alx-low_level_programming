#include <stdio.h>

/**
 * main - Entry point
 *
 * @argv: pointer
 * @argc: integer
 *
 * Return: Always 0.
*/

int main(int argc, char *agrv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
