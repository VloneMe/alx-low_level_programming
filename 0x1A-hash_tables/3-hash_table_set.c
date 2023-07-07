#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_node - Creates a new hash node.
 *
 * @key: The key for the new node.
 * @value: The value for the new node.
 * Return: A pointer to the newly created node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (NULL);
	}

	return (new_node);
}

/**
 * update_node - Updates the value of an existing node.
 *
 * @node: The node to update.
 * @value: The new value for the node.
 */
void update_node(hash_node_t *node, const char *value)
{
	free(node->value);
	node->value = strdup(value);
}

/**
 * hash_table_set - Sets a key-value pair in the hash table.
 *
 * @ht: A pointer to the hash table to set in.
 * @key: The key to set in the hash table.
 * @value: The value to set as the hash node's value.
 * Return: 1 on success, or 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	new_node = create_node(key, value);
	if (!new_node)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		tmp_node = ht->array[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key) == 0)
			{
				update_node(tmp_node, value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			tmp_node = tmp_node->next;
		}

		tmp_node = ht->array[index];
		new_node->next = tmp_node;
		ht->array[index] = new_node;
	}
	else
		ht->array[index] = new_node;

	return (1);
}
