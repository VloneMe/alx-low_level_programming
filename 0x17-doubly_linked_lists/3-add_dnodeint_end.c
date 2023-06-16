#include "lists.h"

/**
 * add_dnodeint_end - Function adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @data: The value of the element
 * Return: Address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int data)
{
	dlistint_t *new_element;
	dlistint_t *current;

	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = data;
	new_element->next = NULL;

	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_element;
		new_element->prev = current;
	}

	return (new_element);
}
