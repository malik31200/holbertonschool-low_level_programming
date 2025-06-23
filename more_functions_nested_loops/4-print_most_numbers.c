#include "main.h"

/**
 * print_most_numbers - Print the number from 0 to 9 without 2 and 4
 * Description : Function that print the number
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		_putchar (c);
	}
	_putchar ('\n');
}
