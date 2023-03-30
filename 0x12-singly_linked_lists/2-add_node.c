#include "lists.h"
#include <string.h>

/**
 * add_node - This function adds a node to the head of linked list
 *
 * @head: pointer to a list_t pointer
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *mix;
	int len1 = 0;

	mix = malloc(sizeof(list_t));
	if (mix == NULL)
		return (NULL);

	while (str[len1])
		len1++;

	mix->len = len1;
	mix->str = strdup(str);
	mix->next = *head;
	*head = mix;

	return (mix);

}
