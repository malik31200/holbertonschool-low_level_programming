#include <stdio.h>

/**
* main - Prints number base of 16 in lowercase
*
* Return:Always 0.
*/

int main(void)

{
	char alph16;
	{
	for (alph16  = 48; alph16 <= 57; alph16++)

	putchar (alph16);
	}
	{
	for (alph16 = 97; alph16 <= 102; alph16++)

	putchar (alph16);
	putchar ('\n');
	}
	return (0);
}
