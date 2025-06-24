#include "main.h"

/**
 * reset_to_98 - Function that takes a pointer to an int
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
