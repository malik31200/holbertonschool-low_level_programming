#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - Function that returns the sum
 * @head: is a head a list
 * Return: if empty return 0 else the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
