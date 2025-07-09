#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - Copy src in the dest
 * @dest: is string to copy into
 * @src: string copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
		return (dest);
}
/**
 * _strlen - calculate the length of string
 * @str: is a string
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
 * new_dog - Creates a new dog
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = malloc(_strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);

	my_dog->owner = malloc(_strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
