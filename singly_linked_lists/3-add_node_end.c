#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Function that add a node at the en
 * @head: is a head of the node
 * @str: is a string
 * Return: adress of the new element or NULL it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *last = *head;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	return (*head);
}
