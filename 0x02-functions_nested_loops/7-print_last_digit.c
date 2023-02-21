#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @r: an interger input
 * Return: the value of the last digit
 *
 */

int print_last_digit(int r)
{
	int digit;

	if (r < 0)
		digit = -1 * (r % 10);
	else
		digit = r % 10;

	_putchar((digit % 10) + '0');

	return (digit % 10);
}
