#include "main.h"

/**
 * swap_int - Function that swaps the values of 2 integers
 * @a : a pointer
 * @b : is a pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
