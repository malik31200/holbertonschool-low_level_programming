#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power y
 *@y: is power
 *@x: is a value
 *Return: -1 or 1
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
