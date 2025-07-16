include <stdlib.h>
#include "main.h"
/**
 *str_concat - function that cocatenates two strings
 *@s1: is a string
 *@s2: is a string
 *Return: if strings are NULL return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int size1, size2, j, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	concat = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
