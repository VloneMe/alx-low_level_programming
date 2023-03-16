#include <stdio.h>
#include <stdlib.h>

/**
 * main - A main entry of the fuction checks code
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Nothing
 *
 */

int main(int argc, char **argv)
{

	int x, y;
	int output;

	if (argc != 3)
	{

		printf("Error\n");
		exit(98);

	}
	else
	{

		x = atoi(argv[1]);
		y = atoi(argv[2]);
		output = x * y;

		printf("%d\n", output);

		return (0);

	}

}
