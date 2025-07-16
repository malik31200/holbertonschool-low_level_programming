#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - is for print the differents operation
 * @argc: number of arguments
 * @argv: is the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	f = get_op_func(operator);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
