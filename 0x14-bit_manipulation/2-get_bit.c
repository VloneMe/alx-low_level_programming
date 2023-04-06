#include "holberton.h"

/**
 * get_bit - This function gets a bit at index
 *
 * @n: number to get bit from
 * @index: index where the bit get at
 * Return: value of bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int maxNum = 0x01;

	maxNum <<= index;
	if (maxNum == 0)
		return (-1);

	if ((n & maxNum))
		return (1);
	else
		return (0);

}
