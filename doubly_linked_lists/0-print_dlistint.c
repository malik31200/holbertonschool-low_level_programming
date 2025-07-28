#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Print the elements of a double list
 * @h : is a pointer of dlistint_t( doubly linked)
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *toprint = h;

	if (toprint == NULL)
	{
		return (0);
	}

	while (toprint != NULL)
	{
		printf("%d\n", toprint->n);
		toprint = toprint->next;
		count++;
	}
	return (count);
}

