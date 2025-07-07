#include <stdlib.h>
#include "main.h"
/**
 *free_grid - Frees a 2 dimensional grid
 *@grid: is an array
 *@height: is an array
 *Return: NULL
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
