#include "function_pointers.h"
/**
 * print_name - Function that print a name
 * @name : is to print a name
 * @f: is a pointer of a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
		f(name);
}

