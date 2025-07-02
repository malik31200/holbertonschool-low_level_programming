#include "main.h"
/**
 *check_sqrt - check the square
 *@i: is an integer
 *@n: is an integer
 *Return: i if is a natural square else return -1
 */
int check_sqrt(int i, int n)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (check_sqrt(i + 1, n));
}
/**
 *_sqrt_recursion - Returns natural square root of a number
 *@n: is a number to test
 *Return: -1 if n  doesn't a natural square
 *else return a natural square
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (check_sqrt(1, n));
}
