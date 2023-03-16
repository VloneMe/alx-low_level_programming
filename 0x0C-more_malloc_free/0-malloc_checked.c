#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 *
 * @b: bytes to allocate
 *
 * Return: pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *n;
	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
