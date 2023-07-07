#include "hash_tables.h"

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
	char *value_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL, *tmp_node = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	value_copy = strdup(value);
	key_copy = strdup(key);

	if (!value_copy || !key_copy)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		tmp_node = ht->array[index];
		while (tmp_node)
		{
			if (strcmp(tmp_node->key, key_copy) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = value_copy;
				free(key_copy);
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
