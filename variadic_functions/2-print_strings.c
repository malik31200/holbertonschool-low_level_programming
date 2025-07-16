#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Function that prints strings
 * @separator: is the string to be printed between nbrs
 * @n: is nbr of strings
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *strings;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(list, char*);
		if (strings == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strings);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}

