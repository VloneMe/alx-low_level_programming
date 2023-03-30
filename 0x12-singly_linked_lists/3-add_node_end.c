#include "lists.h"
#include <string.h>

/**
 * add_node_end - This function adds a node to the end of linked list
 *
 * @head: pointer to a list_t pointer
 * @str: string to add as node
 * Return: pointer Nnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Nnode, *aux;
	unsigned int length = 0;

	Nnode = malloc(sizeof(list_t));
	if (Nnode == NULL)
		return (NULL);

	while (str[length])
		length++;

	Nnode->len = length;
	Nnode->str = strdup(str);
	if (*head == NULL)
	{
		Nnode->next = *head;
		*head = Nnode;
	}
	else
	{
		Nnode->next = NULL;
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = Nnode;
	}

	return (Nnode);
}
