#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char A, a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');

	return (0);
}
