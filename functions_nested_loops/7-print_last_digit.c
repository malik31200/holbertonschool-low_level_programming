#include "main.h"

/**
*print_last_digit - Print_last_digitrints the last digit of a number
*@n: integer to be verified
*Return: 1 for positive n
*/
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar (lastdigit + '0');
	return (lastdigit);
}
