#include "main.h"

/**
 * print_binary - This function prints binary of a decimal number
 *
 * @n: number prints in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int i, maxNum = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;
	while (maxNum)
	{
		if (i == 1 && (n & maxNum) == 0)
			_putchar('0');
		else if ((n & maxNum) != 0)
		{
			_putchar('1');
			i = 1;
		}

		maxNum >>= 1;
	}
}
