#include "hash_tables.h"

/**
 * hash_table_delete - This function frees a hash table.
 *
 * @ht: A pointer to the hash table to delete.
 * Return: None.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *current_table = ht;
	hash_node_t *current_node, *tmp_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				tmp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = tmp_node;
			}
		}
	}

	free(current_table->array);
	free(current_table);
}
