#include "main.h"
/**
 *check_prime_number - check if a number prime
 *@n: is an integer
 *@b: is an integer
 *Return: 1 if a prime number else return 0
 */
int check_prime_number(int n, int b)
{
	if (n <= 1 || n % b == 0)
	{
		return (0);
	}
	if (b * b > n)
	{
		return (1);
	}
	return (check_prime_number(n, b + 1));
}
/**
 *is_prime_number - Function that check if the inut integer is a prime number
 *@n: is a number
 *Return: 1 if a prime number else return 0
**/
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
