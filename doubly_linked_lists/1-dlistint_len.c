#include "lists.h"
/**
 * dlistint_len - Returns the number od f elements in a doubly linked
 * @h: a pointer of a doubly linked
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *toprint = h;

	while (toprint != NULL)
	{
		toprint = toprint->next;
		count++;
	}
	return (count);
}
