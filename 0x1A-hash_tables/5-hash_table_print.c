#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table.
 *
 * @ht: A pointer to the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char comma_flag = 0;
	unsigned long int i = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			comma_flag = 1;
		}
	}
	printf("}\n");
}
