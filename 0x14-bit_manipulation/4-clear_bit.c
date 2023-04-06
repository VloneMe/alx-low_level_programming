#include "main.h"

/**
 * clear_bit - This function sets a bit to 0 at given index
 *
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: returns 1 if it worked, or -1 on error
 * /

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int maxNum = 0x01;

	maxNum = ~(maxNum << index);
	if (maxNum == 0x00)
		return (-1);

	*n &= maxNum;
	return (1);

}
