#include "main.h"

/**
 * print_square - Function that draws a square
 * @size : size of the square
 * Return: void
 */
void print_square(int size)
{
	int l = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	for (l = 0; l < size; l++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar ('#');
		}
		_putchar ('\n');
	}
}
