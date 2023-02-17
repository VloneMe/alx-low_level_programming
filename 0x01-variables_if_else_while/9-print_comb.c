#include <stdio.h>

/**
 * main - main entry point of thr program
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
