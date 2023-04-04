#include "lists.h"

/**
 * free_listint2 - This function frees a list and sets head to NULL
 *
 * @head: A pointer to listint_t structure
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	aux = *head;
	while (*head)
	{
		aux = *head;
		(*head) = (*head)->next;
		free(aux);
	}

	*head = NULL;
}
