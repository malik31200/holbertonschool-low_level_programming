#include "lists.h"
#include <stdio.h>
/**
 * print_list - Print all the elements of a list
 * @h: is a pointer of list_t (linked list)
 * Return: the number of nodes or if NULL return [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
    const list_t toprint = h;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		toprint = toprint->next;
		count++;
	}
	return (count);
}
