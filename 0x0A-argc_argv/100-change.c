#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 *
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 *
 */

int main(int argc, char *argv[])
{

	int n, m, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	output = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5 && n >= 0; m++)
	{
		while (n >= coins[m])
		{
			output++;
			n -= coins[m];
		}
	}

	printf("%d\n", output);

	return (0);
}
