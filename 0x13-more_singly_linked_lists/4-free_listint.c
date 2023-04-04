#include "lists.h"

/**
 * free_listint - This function  frees a linked list
 *
 * @head: A pointer to listint_t structure
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
