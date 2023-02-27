#include "main.h"

/**
 * swap_int - Functins that swaps values of two intergers
 *
 * @a: input intergeer pointer
 * @b: input interger pointer
 *
 * Return: Nothing
 *
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
