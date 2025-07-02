#include "main.h"
/**
 *_strchr - Function that locates a character in a string
 *@s: is a string
 *@c: is a character
 *Return: NULL or s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
