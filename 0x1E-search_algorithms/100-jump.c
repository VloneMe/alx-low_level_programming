#include "search_algos.h"

/**
 * jump_search - This searchs for a value in a sorted array using Jump search.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where 'value' is located,
 * or -1 if 'value' is not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);

	size_t left = 0;
	size_t right = 0;
	size_t i = left;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		left = right;
		right += jump;
	}

	if (right >= size)
		right = size - 1;

	printf("Value checked array[%lu] = [%d]\n", right, array[right]);

	for (; i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
