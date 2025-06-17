#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints digit randomly it is greater than 5, less than 6, or 0.
 *
 * Return:Always 0.
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = (n % 10);

		if (lastdigit > 5)
{
		printf("Last digit of %d  is %d and is greater than 5/n", n, n % 10);
}
		else if (lastdigit < 6 && lastdigit != 0)
{
		printf("Last digit of %d is %d and is less than 6 and not 0/n", n, n % 10);
}
		else
{
		printf("Last digit of %d  is %d and is 0/n", n, n % 10);
}
		return (0);

}
