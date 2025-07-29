#include <stdlib.h>
#include "lists.h"
/**
 *free_dlistint - Frees a doubly list
 *@head: is a head of elements
 *Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tofree = head, *temp;

	while (tofree != NULL)
	{
		temp = tofree->next;
		free(tofree);
		tofree = temp;
	}
}
