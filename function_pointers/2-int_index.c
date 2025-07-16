#include "function_pointers.h"
/**
 * int_index - Function that searches an integer
 * @size: is nbr of elements in the array
 * @array: is an array
 * @cmp: is a pointer to the function to compare value
 * Return: - 1 if no matches or <=0 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
