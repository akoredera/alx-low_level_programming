#include "hash_tables.h"
/**
 * hash_table_delete - free memory allocation of a table
 * @ht: table paramater to free
 * Return: NULL
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
			free_hash_node(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_node - free memory allocation of a node
 * @node: node paramater to free
 * Return: NULL
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node->next);
	free(node);
}
