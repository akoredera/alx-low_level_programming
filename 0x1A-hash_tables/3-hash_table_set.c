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

	unsigned long int key_pos, i;
	hash_node_t *new_node;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	key_pos = key_index((const unsigned char *)key, ht->size);
	for (i = key_pos; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_value);
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[key_pos];
	ht->array[key_pos] = new_node;

	return (1);
}
