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

	n1 = 0;
	while (n1 < n--)
	{
		m = a[n1];
		a[n1++] = a[n];
		a[n] = m;
	}
}
