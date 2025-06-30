#include "main.h"
/**
 *_memset - Function fills memory with a constant byte.
 *@s: is a area memory
 *@b: is a constant byte
 *@n: is the first bytes
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
