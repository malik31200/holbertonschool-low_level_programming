#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- lowercase fois ten  Make a alphabet
 * Description : Function that print the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i <= 9)
	{

	for (alph = 'a'; alph <= 'z'; alph++)
	{

	_putchar (alph);
	}

	_putchar ('\n');

	i++;
	}
}
