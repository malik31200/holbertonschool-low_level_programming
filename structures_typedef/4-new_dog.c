#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
	my_dog->name = malloc(strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);

	my_dog->owner = malloc(strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
