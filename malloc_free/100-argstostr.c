#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Function that concatenates all the arguments
 * @ac: is the number of arguments
 * @av: is an array of arguments
 * Return: NULL ac or av=0
 */
char *argstostr(int ac, char **av)
{
	int i = 0, len = 0, j, currentindex = 0;
	char *concat;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			j++;
		}
		len += j + 1;
	}
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			concat[currentindex] = av[i][j];
			j = j + 1;
			currentindex = currentindex + 1;
		}
		concat[currentindex] = '\n';
		currentindex = currentindex + 1;
	}
	concat[currentindex] = '\0';
	return (concat);
}
