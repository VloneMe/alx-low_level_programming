#include "lists.h"


/**
 * add_dnodeint - This function adds a node to the head of the list
 * @head: The double pointer to the head
 * @data: add into the new node
 * Return: new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int data)
{
	dlistint_t *new_element = NULL, *temp = NULL;

	new_element = malloc(sizeof(dlistint_t));
	if (!new_element)
	{
		free(new_element);
		return (NULL);
	}

	new_element->n = data;
	new_element->prev = NULL;
	new_element->next = NULL;

	if (!head || !(*head))
	{
		*head = new_element;
		return (new_element);
	}
	else
	{
		temp = *head;
		temp->prev = new_element;
		new_element->next = temp;
		*head = new_element;
		return (new_element);
	}
}
