#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function entry point
 *
 * @a: a square matrix of integers
 * @size: an input integer
 *
 * Return: Nothing
 *
 */

void print_diagsums(int *a, int size)
{
	int n = 0, max = size * size, num1 = 0, num2 = 0;

	for (; n < max; n += size + 1)
		num1 += a[n];

	for (n = size - 1; n < max - 1; n += size - 1)
		num2 += a[n];

	printf("%d, %d\n", num1, num2);

}
