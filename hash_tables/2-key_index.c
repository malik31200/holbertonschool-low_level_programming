#include "hash_tables.h"
/**
 * key_index - Function that gives the index of a key
 * @key: is a key of value
 * @size: is the size of a hash table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
	{
		return (0);
	}

	index = hash_djb2(key) % size;
	return (index);
}
