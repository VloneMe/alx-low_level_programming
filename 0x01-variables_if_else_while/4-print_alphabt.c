#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A != 'q' && A != 'e')
			putchar(A);
	}

	putchar('\n');

	return (0);
}
