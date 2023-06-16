#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes node at specified position in a list
 *
 * @head: Double pointer head of the list
 * @index: Index of node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int currentIndex = 0;

	if (!head || !(*head))
		return (-1);

	current = *head;
	while (index != currentIndex && current)
	{
		current = current->next;
		currentIndex++;
	}

	if (!current)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;

	if (index == 0)
		*head = current->next;
	else
		current->prev->next = current->next;

	free(current);
	return (1);
}
