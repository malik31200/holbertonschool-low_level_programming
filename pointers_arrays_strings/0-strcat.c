#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 *@dest: is a string
 *@src: is a string that appends to the dest string
 *Descritption: Appends the src string to the dest string
 *Return result
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
