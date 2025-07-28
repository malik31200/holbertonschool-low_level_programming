#include <stdlib.h>
#include "lists.h"
/**
 *free_list - Frees a list
 *@head: is a head of elements
 *Return: NULL
 */
void free_list(list_t *head)
{
	list_t *tofree = head, *temp;

	while (tofree != NULL)
	{
		temp = tofree->next;
		free(tofree->str);
		free(tofree);
		tofree = temp;
	}
}
