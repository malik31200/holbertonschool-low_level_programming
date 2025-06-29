#include "main.h"
/**
 *leet - Encodes a string into 1337
 *@entry: is an array
 *Return: entry
 */
char *leet(char *entry)
{
	int i, j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char number[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; entry[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (entry[i] == lowercase[j] || entry[i] == uppercase[j])
			{
				entry[i] = number[j];
			}
		}
	}
	return (entry);
}
