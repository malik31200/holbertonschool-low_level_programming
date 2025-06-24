#include "main.h"

/**
 *print_rev - Print a string in reverse
 *@s: is a pointer
 *Return: void
*/
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (count = count - 1; count >= 0; count--)
	{
		_putchar (s[count]);
	}
	_putchar ('\n');
}
