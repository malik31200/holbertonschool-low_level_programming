#include "main.h"
/**
 * _puts_recursion - Print a string
 *@s: is a string
 */
void _puts_recursion(char *s)
{

	if  (s[0] != '\0')
	{
		_putchar (s[0]);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
