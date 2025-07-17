#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
void print_char(va_list list);
void print_int(va_list list);
void print_float(va_list list);
void print_string(va_list list);
void(*get_print(char format))(va_list);
/**
 * print_all - Function that prints anything
 * @format: is a list of types of arguments
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    va_list list;


    va_start(list, format);
    while (format[i] != '\0')
    {
        if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
        {
                get_print(format[i])(list);
        }
        i++;
    }
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
    printf("%s", va_arg(list, char*));
}

/**
 * 
 */
void(*get_print(char format))(va_list)
{
int i = 0;

    char format_array[] = {'s', 'i', 'f', 'c', '\0'};
    void(*ptrf[])(va_list) = {print_string, print_int, print_float, print_char, NULL};
    while (format != format_array[i])
    {
        i++;
    }
    return (ptrf[i]);
}
