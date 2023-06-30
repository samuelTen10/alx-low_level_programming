#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: input string
 * @size: size of the buffer
*/

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (int i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		/**
		 * Print hexadecimal content
		*/
		for (int j = i; j < i + 10 && j < size; j++)
		{
			printf("%02x ", (unsigned char)b[j]);
		}

		/**
		 * Fill any remaining space
		*/
		for (int j = i + size; j < i + 10; j++)
		{
			printf("   ");
		}

			printf(" ");

		/**
		 * Print content of the buffer
		*/
		for (int j = i; j < i + 10 && j < size; j++)
		{
			unsigned char c = b[j];
			if (isprint(c))
			{
				printf("%c", c);
			} else
			{
				printf(".");
			}
		}
		printf("\n");
	}
}

int main(void)
{
	char buffer[] = "This is a test buffer!";
	int size = sizeof(buffer) - 1;
	/**
	 * Exclude the null terminator
	*/

	print_buffer(buffer, size);

	return (0);
}
