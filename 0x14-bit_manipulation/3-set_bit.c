#include "main.h"

/**
 * set_bit - This function sets a bit at given index to 1
 *
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: returns 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num = 0x01;
	num <<= index;
	if (num == 0)
		return (-1);
	*n |= num;
	return (1);
}
