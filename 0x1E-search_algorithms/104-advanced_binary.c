#include "search_algos.h"

/**
 * advanced_binary_recursive - This recursive function
 * for advanced binary search.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @low: The lowest index of the current search range.
 * @high: The highest index of the current search range.
 * @value: The value to search for.
 * Return: The index where 'value' is located,
 * or -1 if 'value' is not found.
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int i = low;

	if (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, low, mid - 1, value));
		}
		else if (array[mid] < value)
		{
			return (advanced_binary_recursive(array, mid + 1, high, value));
		}
		else
		{
			return (advanced_binary_recursive(array, low, mid - 1, value));
		}
	}

	return (-1);
}

/**
 * advanced_binary - This search is for the first occurrence
 * of a value in a sorted array.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where 'value' is located,
 * or -1 if 'value' is not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
