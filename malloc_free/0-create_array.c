#include <stdlib.h>
#include "main.h"
/**
 * *create_array - Function that creates an array
 *@size: is a size of array
 *@c: is a number of elelments
 *Return: NULL if is size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
