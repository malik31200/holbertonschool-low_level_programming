#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal
 * @n : number of times the character _
 * Return: void
 */
void print_diagonal(int n)
{
	int l, j;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	for (l = 0; l < n; l++)
	{
		for (j = 0; j < l; j++)
	{
			_putchar (' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
}

