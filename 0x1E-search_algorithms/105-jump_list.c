#include "search_algos.h"

/**
 * jump_list - This search for a value
 * in a sorted singly linked list using Jump search.
 *
 * @list: Pointer to the head of the sorted list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where 'value' is located,
 * or NULL if 'value' is not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = (size_t)sqrt(size);
	listint_t *current = list;
	listint_t *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	while (current != NULL && current->n < value)
	{
		prev = current;
		size_t i = 0;

		for (; current->next != NULL && i < jump; i++)
			current = current->next;
		rintf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);
	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
