#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function to allocates memory using malloc.
 *
 * @b: unsigned input integer
 *
 * Return: A pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}

	return (n);

}
