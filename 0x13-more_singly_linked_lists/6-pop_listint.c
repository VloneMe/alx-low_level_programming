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
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
