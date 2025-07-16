#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Function that reallocates a memory block
 * @ptr: is a memory block
 * @old_size: is a old size
 * @new_size: is a new size
 * Return: NULL if ptr is NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;
    unsigned min_size;
    char *new_bytes, *old_bytes;

    if (new_size == old_size)
    {
        return (ptr);
    }
    if (ptr != NULL && new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    if (ptr == NULL)
    {
       return malloc(new_size);
    }
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return (NULL);
    }
    if (old_size < new_size)
    {
        min_size = old_size;
    }
    else
    {
        min_size = new_size;
    }

    old_bytes = (char *)ptr;
    new_bytes = (char *)new_ptr;

    for (i = 0; i < min_size; i++)
    {
        new_bytes = old_bytes;
    }
    free(ptr);
    return new_ptr;

}