#include "main.h"

/**
 *_puts - Print a string to stdout
 *@str: is a pointer
 *Return: void
*/
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{	_putchar (str[count]);
	}
	_putchar ('\n');
}
