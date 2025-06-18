#include <stdio.h>

/**
* main - Prints alphabet lowercase and uppercase
*
* Return:Always 0.
*/

int main(void)

{
	char alph;
	{
	for (alph = 97; alph <= 122; alph++)

	putchar (alph);
	}
	{
	for (alph = 65; alph <= 90; alph++)
	putchar (alph);
	putchar ('\n');
	}
	return (0);
}
