#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: arguments counter
 * @argv: arguments values
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char **argv)
{

	int n1, n2, output;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		output = n1 * n2;
		printf("%d\n", output);
		return (0);
	}

}
