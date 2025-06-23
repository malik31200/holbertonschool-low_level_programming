#include "main.h"

/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 * Description : Function that print the number
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int c;

	while (i <= 9)
	{
		for (c = 0; c <= 14; c++)

		{
			if (c >= 10)
		{
				_putchar ((c / 10) + '0');
		}
			_putchar ((c % 10) + '0');
		}
	i++;
	_putchar ('\n');
	}
}
