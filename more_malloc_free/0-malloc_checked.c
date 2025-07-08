#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc
 *@b: is number element
 *Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
