#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 *
 * @size: array size
 * @c: char
 *
 * Return:return  pointer to array, NULL when fail
 *
 */

char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (n = 0; n < size; n++)

		str[n] = c;

	return (str);

}
