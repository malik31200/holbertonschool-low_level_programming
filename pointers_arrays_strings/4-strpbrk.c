#include "main.h"
/**
 *_strpbrk - Function searches a string
 *@s: is a string
 *@accept: is a string
 *Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
