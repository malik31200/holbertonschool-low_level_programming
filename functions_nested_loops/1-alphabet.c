#include <stdio.h>
#include "main.h"

/**
 * print_alphabet- lowercase  Make a alphabet
 * Description : Function that print the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)

	_putchar (alph);

	_putchar ('\n');
}
