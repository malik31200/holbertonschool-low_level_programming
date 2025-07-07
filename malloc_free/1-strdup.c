#include <stdlib.h>
#include "main.h"
/**
 *  *_strdup - duplicate a string
 *@str: is a string
 *Return: if string is NULL return NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
