#include "lists.h"
#include <string.h>

/**
 * add_nodeint - This function  adds a new nod at the begining of a list
 *
 * @head: list_t structure
 * @n: put into the new node
 * Return: address of new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new;

	return (*head);
}
