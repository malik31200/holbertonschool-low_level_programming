#include <stdio.h>
/**
 *main - Programm that prints its names
 *@argc: is an integer
 *@argv: is an array
 *Return: Always(0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
