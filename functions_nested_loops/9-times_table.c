#include "main.h"

/**
*times_table - Print the 9 times table
*
*Return:void
*/
void times_table(void)
{
	int n, mult;

	for (n = 0; n <= 9; n++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			if (mult * n < 10)
		{
			if (mult != 0)
		{
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
		}
			_putchar ((mult * n) + '0');
		}
			else
		{
			 _putchar (',');
			 _putchar (' ');
			_putchar (((mult * n) / 10) + '0');
			_putchar (((mult * n) % 10) + '0');
		}
		}
		_putchar ('\n');
	}
}


