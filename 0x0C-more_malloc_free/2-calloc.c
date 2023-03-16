#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - A function that allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		*((char *)(c) + x) = 0;

	return (c);

}
