#include "main.h"

/**
 *reverse_array - Function reverses content of an array of int
 *@a: is an array
 *@n: is a number of elements
 *Return: Always(0)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = a[n];

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
