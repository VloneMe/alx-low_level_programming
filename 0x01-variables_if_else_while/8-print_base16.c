#include <stdio.h>

/**
 * main - main entry point if the program
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char n, l;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');

	return (0);
}
