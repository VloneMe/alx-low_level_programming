#include "lists.h"

/**
 * get_dnodeint_at_index - This returns nth node of a dlistint_t linked list
 * @head: Head of the list
 * @index: Nth node index
 * Return: Nth of the  node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
			break;
		head = head->next;
		current_index++;
	}

	return (head);
}
