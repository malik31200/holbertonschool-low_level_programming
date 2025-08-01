#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int first;
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	first = 1;

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (first == 0)
			{
				printf(",");
			}
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
