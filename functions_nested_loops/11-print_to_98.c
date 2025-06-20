#include "main.h"
#include <stdio.h>

/**
*print_to_98 - Print all natural numbers
*@n: n the starting number
*Return:void
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
		printf("%d, ", n);
		n--;
		}
	else
		{
		printf("%d, ", n);
		n++;
		}
	}
		printf("%d\n", n);
}
