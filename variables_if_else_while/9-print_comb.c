#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
*
* Return:Always 0.
*/

int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar (num + '0');
		if (num != 9)
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar ('\n');
	return (0);
}
