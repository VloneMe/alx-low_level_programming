#include "search_algos.h"

/**
 * binary_search - This searchs for a value in a sorted array
 * of integers using binary search.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where 'value' is located,
 * or -1 if 'value' is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		size_t i = left;

		printf("Searching in array: ");
		for (; i <= (size_t)right; i++)
		{
			if (i != (size_t)right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
