#include <stdio.h>

/**
 * main - entry point of the progra
 *
 * Return: 0 (success)m
 *
 */

int main(void)
{
	int A, B;

	for (A = '0'; A < '9'; A++)
		for (B = A + 1; B <= '9'; B++)

			if (A != B)
			{
				putchar(A);
				putchar(B);

				if (A == '8' && B == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
	putchar('\n');

	return (0);
}
