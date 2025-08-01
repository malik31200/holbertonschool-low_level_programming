#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - Function that adds an elements to the hash table
 * @ht: hash table
 * @key: key of a value
 * @value: value content in a key
 * Return: 0 is NULL 1 is success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *newnode;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (_strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = _strdup(value);
			if (node->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		node = node->next;
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = _strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = _strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
