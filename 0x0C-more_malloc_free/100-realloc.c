#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory
 * @old_size: old size  space
 * @new_size: new size in bytes of memory to be allocated
 *
 * Return: void pointer to new memory location
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new_l, *new_p;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_l = malloc(new_size);
	new_p = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (x = 0; x < old_size; x++)
		new_l[x] = new_p[x];

	free(ptr);

	return (new_l);

}
