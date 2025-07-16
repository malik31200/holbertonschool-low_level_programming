#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Function that execute a function given as parameter each element of an array
 *@action: is a pointer
 *@size: is the size of the array
 *@array: is an array
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (action == NULL)
    {
        return;
    }
    for (i = 0; i < size; i++)
    {
    action(array[i]);
    }
}