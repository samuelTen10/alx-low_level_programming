#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _puts - prints a string
 *
 * @str: pointer to string
 *
 * Return: Always 0.
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - converts a string to integer
 *
 * @s: input str
 *
 * Return: Always 0.
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - print an int
 *
 * @n: integer
 *
 * Return: Always 0.
*/

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, resp;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		resp = n / div;
		_putchar('0' + resp);
	}
}

/**
 * main - prints the multiple
 *
 * @argv: list
 * @argc: int
 *
 * Return: Always 0.
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
