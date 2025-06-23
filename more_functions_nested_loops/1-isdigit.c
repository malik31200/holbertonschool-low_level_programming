#include "main.h"

/**
 *_isdigit - function that check for a digit
 * @c: is a digit
 *Retuen: 1 for a digit  or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
