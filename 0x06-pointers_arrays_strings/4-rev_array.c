#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: array inout
 * @n: element of array
 *
 * Return: Nothing
 *
 */

void reverse_array(int *a, int n)
{
	int n1, m;

	n = 0;
	while (n1 < n--)
	{
		m = a[n];
		a[n1++] = a[n];
		a[n] = m;
	}
}
