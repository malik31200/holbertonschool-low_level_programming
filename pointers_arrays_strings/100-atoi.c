#include "main.h"

/**
*_atoi -  Function that convert a strig to an integer
*@s: is a pointer
*Return: Always(0)
*/
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	result = result * sign;
	return (result);
}
