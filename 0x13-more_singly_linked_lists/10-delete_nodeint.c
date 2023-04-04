#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function deletes the node
 *
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *Xnode;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
	}
	else
	{
		while (i < index)
		{
			aux = aux->next;
			if (aux == NULL)
				return (-1);
			i++;
		}
		Xnode = aux;
		Xnode = Xnode->next;
		aux->next = Xnode->next;
		free(Xnode);
	}

	return (1);
}
