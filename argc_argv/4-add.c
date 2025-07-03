#include <stdio.h>
#include <stdlib.h>
/**
 *main - Program that multiplies two numbers
 *@argv: is an array
 *@argc: is a number of arguments
 *Return: 0 if success or 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int a = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			a += atoi(argv[i]);
		}
	}
			printf("%d\n", a);
			return (0);
}
