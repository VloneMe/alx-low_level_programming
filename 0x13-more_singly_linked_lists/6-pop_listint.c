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
	listint_t *new;
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (num);
}
