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

	unsigned int x;
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = 0;
	y = malloc(nmemb * size);

	if (x == NULL)
		return (NULL);

	for (; x < nmemb * size; x++)
		*(y + x) = 0;

	return (y);

}
