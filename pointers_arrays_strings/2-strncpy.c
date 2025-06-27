#include "main.h"

/**
 *_strncpy - Copy a strings.
 * @dest: is a string
 * @src: is a string
 * @n : is number of character
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
