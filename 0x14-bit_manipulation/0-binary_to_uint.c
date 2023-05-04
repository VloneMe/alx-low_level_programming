#include "main.h"

/**
 * binary_to_uint - This function converts a binary 
 * number to unsigned int
 *
 * @b: string containing the binary number
 * Return: number
 */

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int num = 0;

	if (!b)
		return (0);

	n = 0;
	for (; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		num = 2 * num + (b[n] - '0');
	}

	return (num);
}
