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
/**
 * _strcmp - Function that compare two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: 0 is egal or 1 is this not
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (s1[i] - s2[i]);
}
/**
 *  *_strdup - duplicate a string
 *@str: is a string
 *Return: if string is NULL return NULL
 */
char *_strdup(const char *str)
{
	char *copy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
/**
 *_strlen - Returns the lenght of a string
 *@s: is a pointer
 *Return: void
 */
int _strlen(const char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	return (count);
}

