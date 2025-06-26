#include "main.h"

/**
*_strcpy -  Function that copies the string by src to by dest
*@src: is the source
*@dest: is the destination
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
