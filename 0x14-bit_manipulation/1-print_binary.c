#include "main.h"

/**
 * print_binary - This function prints binary of a decimal number
 *
 * @n: number prints in binary
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{

	int num, num_count = 0;
	unsigned long int curnt_num;

	num = 63;
	for (; num >= 0; n--)
	{
		curnt_num = n >> num;

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
