#include "main.h"

/**
 * print_sign - prints the value of the sign
 *
 * @n: taake the input number
 *
 * Return: 1 for postive, o for zero or -1 for negative
 *
 */

int print_sign(int n)
{
	int Value;

	if (n > 0)
	{
		Value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		Value = 0;
		_putchar('0');
	}
	else
	{
		Value = -1;
		_putchar('-');
	}

	return (Value);
}
