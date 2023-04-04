#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This function returns the number of elements in the list
 *
 * @h: A pointer to listint_t structure
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
