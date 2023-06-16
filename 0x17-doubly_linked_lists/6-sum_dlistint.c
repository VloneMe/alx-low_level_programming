#include "lists.h"

/**
 * sum_dlistint - This calculates sum of elements in a doubly linked list
 * @head: Pointer head of the list
 * Return: All elements in the list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int totalSum = 0;

	while (head)
	{
		totalSum += head->n;
		head = head->next;
	}

	return (totalSum);
}
