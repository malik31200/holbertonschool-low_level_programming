#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints minimum nbr of coins to make change
 *@argv: is an array
 *@argc: is a number of arguments
 *Return: 1 if is not exactly 1 or 0 if is negative
 */
int main(int argc, char *argv[])
{
	int change = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		change++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{	cents -= 2;
			continue;
		}
		if ((cents - 1) >= 0)
		{cents--;
		}
	}
	printf("%d\n", change);
	return (0);
}
