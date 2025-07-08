#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Function that concatenates 2 strings
 * @s1: is a string
 * @s2: is a string
 * @n: is number bytes
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int  j = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		j++;
	}

	concat = malloc(sizeof(char) * (j + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[i] != '\0' && j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
