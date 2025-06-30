#include "main.h"
/**
 * _strspn - Function that gets the lenghr of a prefix substring
 *@s: is a string
 *@accept: is a string
 *Return: NULL
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, b, found;
	int byte = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				byte++;
				found = 1;
				break;
			}
		}
	if (!found)
	{
		break;
	}
	}
	return (byte);
}
