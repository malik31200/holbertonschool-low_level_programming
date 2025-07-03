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
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
