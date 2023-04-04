#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node to the end of list
 *
 * @head: A pointer to list structure
 * @n: An integer into the new node
 * Return: address of new element, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = NULL;
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}

	return (new);
}
