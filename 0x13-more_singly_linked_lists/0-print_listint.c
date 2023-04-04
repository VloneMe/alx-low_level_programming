#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This is a function to prints all the elements in the list
 *
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
