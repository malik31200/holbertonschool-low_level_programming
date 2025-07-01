#include "main.h"
/**
 *factorial - Returns the factorial of a given number
 *@n: is a number
 *Return: -1 or 1 n * factorial(n - 1)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
