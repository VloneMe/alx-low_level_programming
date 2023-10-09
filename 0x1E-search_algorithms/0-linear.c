#include "search_algos.h"

/**
 * linear_search - This searchs for a value in an array of integers
 * using linear search.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The first index where 'value' is located,
 * or -1 if 'value' is not found
 */
int linear_search(int *array, size_t size, int value)
{

	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	return (-1);
}
