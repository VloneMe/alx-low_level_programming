#include "function_pointers.h"

/**
* int_index - This funct returns index place if comparison = true, else -1
*
* @array: array
* @size: size of elements in array
* @cmp: pointer to func of one of the 3 in main
*
* Return: 0
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	n = 0;
	for (; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}

	return (-1);

}
