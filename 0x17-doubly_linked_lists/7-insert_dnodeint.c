#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a specified position in a list
 * @head: Double pointer head of the list
 * @idx: Index to insert the new node at
 * @n: Data to add to the new node
 * Return: A pointer new element, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *newElement = NULL, *current = NULL;
	unsigned int currentIndex = 0;

	newElement = malloc(sizeof(dlistint_t));
	if (!newElement)
		return (NULL);
	newElement->next = NULL;
	newElement->prev = NULL;
	newElement->n = n;
	if (!head || !(*head))
		*head = newElement;
	else
	{
		current = *head;
		while (currentIndex != idx && current->next)
		{
			current = current->next;
			currentIndex++;
		}

		if (current->next)
			newElement->prev = current->prev;
		else
			newElement->prev = current;

		if (idx == currentIndex)
		{
			current->next = newElement;
			newElement->prev = current;
		}
		else if (idx == currentIndex - 1)
		{
			if (current->prev)
				current->prev->next = newElement;
			else
				*head = newElement;

			current->prev = newElement;
			newElement->next = current;
		}
		else
		{
			free(newElement);
			return (NULL);
		}
	}
	return (newElement);
}
