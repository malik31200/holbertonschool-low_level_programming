#include "main.h"

/**
 * print_line - Function that draws line in the terminal
 * @n : number of times the character _
 * Return: void
 */
void print_line(int n)
{
	int l = 0;

	while (l < n)
	{
		_putchar ('_');
		l++;
	}
	_putchar ('\n');
}

