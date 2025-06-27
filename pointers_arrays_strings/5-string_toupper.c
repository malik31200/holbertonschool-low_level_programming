#include "main.h"
/**
 *string_toupper - Changes lowercase to uppercase
 *@lett: is a string
 *Return: lett
 */
char *string_toupper(char *lett)
{
	int i;

	for (i = 0; lett[i] != '\0'; i++)
	{
		if (lett[i] >= 97 && lett[i] <= 122)
		{
			lett[i] = lett[i] - 32;
		}
	}
	return (lett);
}

