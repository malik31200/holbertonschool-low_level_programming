#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
/**
 * print_all - Function that prints anything
 * @format: is a list of types of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list list;
	char format_array[] = {'s', 'i', 'f', 'c', '\0'};
	void(*ptrf[])(va_list) = {print_string, print_int, print_float, print_char};
	char *separator = "";

	va_start(list, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (format_array[j] != '\0')
		{
			if (format_array[j] == format[i])
			{
				printf("%s", separator);
				ptrf[j](list);
				separator = ", ";
			}

			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

/**
 * print_char - Print a charactere
 * @list: is a list of arguments
 * Return: Nothing
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Print a integer
 * @list: is a list of arguments
 * Return: Nothing
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Print a integer
 * @list: is a list of arguments
 * Return: Nothing
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Print a integer
 * @list: is a list of arguments
 * Return: Nothing
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}
