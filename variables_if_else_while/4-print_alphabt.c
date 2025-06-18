#include <stdio.h>

/**
* main - Prints alphabet lowercase except q and e
* Return:always 0
*/

int main(void)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
	if (alph != 101 && alph != 113)
	putchar (alph);
	}
	putchar ('\n');
	return (0);
}
