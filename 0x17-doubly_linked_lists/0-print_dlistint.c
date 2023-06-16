#include "lists.h"

/**
 * print_dlistint - This function prints a doubly linked list
 * @head: pointer of doubly linked list
 * Return: nodes in list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;
	const dlistint_t *current;

	current = head;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
