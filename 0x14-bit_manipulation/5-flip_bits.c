/**
 * flip_bits - This function gets number of bits needed to flip
 *
 * @n: numbers needed to equal m for n
 * @m: number to set other equal
 * Return: number of fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numflips = 0;
	unsigned long int x, maxNum;

	x = (n ^ m);
	maxNum = 0x01;
	while (maxNum <= x)
	{
		if (maxNum & x)
			numflips++;
		maxNum <<= 1;
	}

	return (numflips);
}
