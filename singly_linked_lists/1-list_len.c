#include "lists.h"
#include <stdio.h>
/**
 * list_len - Return the number of element in a linked list
 * @h: is a pointer of list_t (linked list)
 * Return: the number of element in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *toprint = h;

	while (toprint != NULL)
	{
		toprint = toprint->next;
		count++;
	}
	return (count);
}
