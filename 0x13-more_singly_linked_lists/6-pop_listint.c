6-pop_listint.c
#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list
 *
 * @head: pointer element in the linked list
 * Return: the elements that was deleted,
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	node = curr->n;
	h = curr->next;
	free(curr);
	*head = h;

	return (node);
}
