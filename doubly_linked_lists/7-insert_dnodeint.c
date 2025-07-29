#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Function that insert a node at a given position
 * @h: is a pointer of function
 * @idx: is the index of the list where newnode will be added
 * @n: is an integer
 * Return: the adress of the new node or NULL it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *node = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (node->next != NULL && idx > 0)
	{
		idx--;
		node = node->next;
	}
	if (idx > 0)
	{
		return (NULL);
	}
	else if (node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		newnode = malloc(sizeof(dlistint_t));
		if (newnode == NULL)
		{
			return (NULL);
		}
		newnode->n = n;
		newnode->next = node;
		newnode->prev = node->prev;
		node->prev->next =  newnode;
		node->prev = newnode;
	}
	return (newnode);
}
