#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Function that returns to  a 2 dim. array of integers
 * @width: is an array
 * @height: is an array in the array
 * Return: NULL if is negative or 0
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array1;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	array1 = malloc(sizeof(int *) * height);
	if (array1 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array1[i] = malloc(sizeof(int) * width);
		if (array1[i]  == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array1[j]);
			}
			free(array1);
			return (NULL);
		}
	}
	return (array1);
}
