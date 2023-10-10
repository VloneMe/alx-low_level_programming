#include "search_algos.h"

/**
 * interpolation_search - Search for a value in a sorted array
 * using interpolation search.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where 'value' is located,
 * or -1 if 'value' is not found.
 */
int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        if (low == high) {
            if (array[low] == value) {
                printf("Value checked array[%d] = [%d]\n", low, array[low]);
                return low;
            }
            return -1;
        }

        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value) {
            return pos;
        }

        if (array[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;
}
