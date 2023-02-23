#include "main.h"

/**
 * print_line - for printing line
 *
 * @n: number input
 *
 * Return: 0 Always
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int m;

		for (m = 1; m <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

