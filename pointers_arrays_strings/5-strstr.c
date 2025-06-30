#include "main.h"
/**
 *calculate_length - Calculate the lenght
 *@str: is a string
 *Return: lenght
 */
int calculate_length(char *str)
{
	int c;

	for (c = 0; str[c]; c++)
	;
	return (c);
}
/**
 * _strstr - Function that locates a substring
 * @needle: is a substring
 * @haystack: is a string
 * Return: needle or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, b, isWord;
	char *result = NULL;
	int len_haystack = calculate_length(haystack);
	int len_needle = calculate_length(needle);


	if (len_needle > len_haystack)
		return (NULL);

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		isWord = 0;
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[i + b] == needle[b])
			{
				isWord = 1;
			}
			else
			{
				break;
			}
		}
		if (isWord && needle[b] == '\0')
		{
			result = haystack + i;
			return (result);
		}
		i = i + b;
	}
	return (NULL);
}

