#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: num of argument
 * @argv: pointer to  array
 *
 * Return: always 0.
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, mincoin = 0, money = atoi(argv[1]);
		int coin[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= coin[i])
			{
				mincoin += money / coin[i];
				money = money % coin[i];

				if (money % coin[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", mincoin);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
