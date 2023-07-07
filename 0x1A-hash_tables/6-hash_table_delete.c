#include "hash_tables.h"

/**
 * hash_table_delete - This function frees a hash table.
 *
 * @ht: A pointer to the hash table to delete.
 * Return: None.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL;
	hash_node_t *next_node = NULL;

	if (ht == NULL)
		return;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
	}

	free(ht->array);
	free(ht);
}
