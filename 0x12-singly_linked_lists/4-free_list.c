#include "lists.h"

/**
 * free_list - This function frees all elements in a linked list
 *
 * @head: pointer to head element of list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *aux;

	aux = head;
	while (head)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}

	free(head);
}
