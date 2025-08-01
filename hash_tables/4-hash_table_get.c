#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_get - Function that retrieves a value assoociated whith a key
 * @ht: hash table
 * @key: is the key content a value
 * Return: the value or NULL if the key isn't find
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (_strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
