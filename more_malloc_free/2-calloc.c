#include <stdlib.h>
#include "main.h"
/**
 *  _calloc - Function that allocates memory for an array
 * @nmemb: are elements
 * @size: is syze bytes
 * Return: NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return ((void *)array);
}
