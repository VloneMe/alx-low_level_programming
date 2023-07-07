#include "hash_tables.h"

/**
 * hash_table_get - This function retrieve the value
 * that isassociated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return:  NULL Otherwise - the value associated with the key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value = NULL;
	hash_node_t *current_node;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if ((ht->array)[index] == NULL)
		return (NULL);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			value = current_node->value;
			break;
		}
		current_node = current_node->next;
	}

	return (value);
}
