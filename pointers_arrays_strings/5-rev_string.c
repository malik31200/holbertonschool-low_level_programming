#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: is a pointer
 *Return: void
*/
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	char temp = s[count];

	for (count = 0; s[count] != '\0'; count++)
	{
	}
	for (i = 0; i < count / 2; i++)
	{
		temp = s[count - 1 - i];
		s[count - 1 - i] = s[i];
		s[i] = temp;
	}
}
