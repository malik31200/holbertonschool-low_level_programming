#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string
 *@s: is a string
 *Return: result or 0
 */
int _strlen_recursion(char *s)
{

	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
