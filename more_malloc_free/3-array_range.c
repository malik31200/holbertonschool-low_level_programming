#include <stdlib.h>
#include"main.h"
/**
 * array_range - Function that creates an array of integers
 * @min: contain value min
 * @max: contain value max
 * Return: NULL if min>max or malloc fail
 */
int *array_range(int min, int max)
{
	int *array;
	int diff = max - min, i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (diff + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (diff + 1); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
