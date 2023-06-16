#include "lists.h"

/**
 * dlistint_len - This function gets the length of the list
 * @h: head pointer of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
