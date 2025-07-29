#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - To get the nth node of a list
 * @head: is a head of the list
 * @index: is the index of the node
 * Return: the nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
