#include "main.h"
/**
 *_memcpy - Function that copies memory area
 *@dest: is a memory area
 *@src: is a memory area
 *@n: are bytes
 *Description: copies n bytes from src to dest
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
