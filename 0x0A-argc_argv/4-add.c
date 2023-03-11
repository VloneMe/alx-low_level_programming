#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This program adds positive numbers
 *
 * @argc: An arguments counter
 * @argv: An argument values
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char **argv)
{

	int n, m, output = 0;

	while (argc-- > 1)
	{
		for (m = 0; argv[argc][m]; m++)
		{
			if (!(isdigit(argv[argc][m])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		output += n;
	}

	printf("%d\n", output);

	return (0);

}
