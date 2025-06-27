#include "main.h"

/**
 *_strcmp - Compares two functions
 * @s1: is the string
 * @s2: is the string
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
