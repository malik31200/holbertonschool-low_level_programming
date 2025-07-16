#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two integers
 * @a: is a first number
 * @b: is a second number
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub two integers
 * @a: is a first number
 * @b: is a second number
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplie two integers
 * @a: is a first number
 * @b: is a second number
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two integers
 * @a: is a first number
 * @b: is a second number
 * Return: a/b or exit if b = 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo divised a by b
 * @a: is a first number
 * @b: is a second number
 * Return: a%b or exit if b = 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
