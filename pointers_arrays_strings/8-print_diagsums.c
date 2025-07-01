#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Print the sums of the two diagonals
 *@a: is a array
 *@size: is a size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumfirst = 0;
	int sumsecond = 0;

	for (i = 0; i < size; i++)
	{
		sumfirst += a[i * size + i];
		sumsecond += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sumfirst, sumsecond);
}
