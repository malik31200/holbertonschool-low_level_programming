#include <stdio.h>
/**
 * main - Prints all arguments it receives
 *@argc: is number of argument
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
