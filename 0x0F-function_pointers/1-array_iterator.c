#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - This funct prints each array elem on a newl
*
* @array: array
* @size: elem to print
* @action: pointer to print in regular or hex
*
* Return: void
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	n = 0;
	for (; n < size; n++)
	{
		action(array[n]);
	}

}
