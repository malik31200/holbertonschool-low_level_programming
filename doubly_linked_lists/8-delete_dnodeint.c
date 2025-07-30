#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Delete a node
 * @head: is a head of a list
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded or -1 it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nextnode = *head;
	dlistint_t *node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		nextnode = (*head)->next;

		if (nextnode != NULL)
		{
			nextnode->prev = NULL;
		}
		free(*head);
		*head = nextnode;
		return (1);
	}
	while (node->next != NULL && index > 0)
	{
		index--;
		node = node->next;
	}
	if (node->next == NULL && index > 0)
	{
		return (-1);
	}
	else if (node->next == NULL)
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}
	else
	{
		node->next->prev = node->prev;
		node->prev->next = node->next;
		free(node);
		return (1);
	}
}
