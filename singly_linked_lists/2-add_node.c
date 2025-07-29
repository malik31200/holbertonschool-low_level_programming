#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function that add a node at beginnig
 * @head: is a head of the node
 * @str: is a string
 * Return: adress of the new element or NULL it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

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
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);

}
/**
 *_strlen - Calculate Lengh of a string
 *@str: is a string
 *Return: len
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
