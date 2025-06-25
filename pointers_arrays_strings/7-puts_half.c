#include "main.h"

/**
 *puts_half - Print half a string
 *@str: is a pointer
*/
void puts_half(char *str)
{
	int count;
	int i = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
	}
	for (i = (count + 1) / 2; i <= count - 1; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
