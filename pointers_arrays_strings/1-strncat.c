#include "main.h"

/**
 * *_strncat - Concatenates two strings.
 * @dest: is a string
 * @src: is a string
 * @n: is number of charactere
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
