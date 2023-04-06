#include "main.h"

/**
 * print_binary - This function prints binary of a decimal number
 *
 * @n: number prints in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{

	int n, num_count = 0;
	unsigned long int curnt_num;

	n = 63;
	for (; n >= 0; n--)
	{
		curnt_num = n >> i;

		if (curnt_num & 1)
		{
			_putchar('1');
			num_count++;
		}
		else if (num_count)
			_putchar('0');
	}

	if (!num_count)
		_putchar('0');

}
