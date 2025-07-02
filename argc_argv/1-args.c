#include <stdio.h>
/**
 *main - Print the number of arguments
 *@argc: is a number of argument
 *@argv: is an array
 *Return: Always(0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
