#include "main.h"
/**
 *_print_rev_recursion - Print a string in reverse
 *@s: is a string
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (s[0]);
	}
	else
		return;
}
