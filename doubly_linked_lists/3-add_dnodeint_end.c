#include "lists.h"
#include "stdlib.h"
/**
 * add_dnodeint_end - Add a node at the end of a list
 * @head: is a head of a list
 * @n: is an integer
 * Return: the new node or failed NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		newnode->prev = last;
		last->next = newnode;
	}
	return (newnode);

}
