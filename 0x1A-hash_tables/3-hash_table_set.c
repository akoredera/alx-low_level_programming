#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table to add or update the key/value
 * @key: key
 * @value: value assicated with the key
 * Return: 1 otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_pos;
	hash_node_t *current_node, *new_node;

	key_pos = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[key_pos];
	if (current_node == NULL)
		return (0);
	if (strcmp(ht->array[key_pos]->key, key) == 0)
	{
		free(ht->array[key_pos]->value);
		ht->array[key_pos]->value = (char *)value;
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = (char *)value;
	new_node->next = ht->array[key_pos];
	ht->array[key_pos] = new_node;

	return (1);
}
