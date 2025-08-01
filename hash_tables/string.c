#include <stdlib.h>
#include "hash_tables.h"

/**
 * _strcmp - Function that compare two strings
 * @s1: string to compare
 * @s2: string to compare
 * Return: 0 is egal or 1 is this not
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
/**
 *  *_strdup - duplicate a string
 *@str: is a string
 *Return: if string is NULL return NULL
 */
char *_strdup(const char *str)
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
/**
 *_strlen - Returns the lenght of a string
 *@s: is a pointer
 *Return: void
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	return (count);
}
