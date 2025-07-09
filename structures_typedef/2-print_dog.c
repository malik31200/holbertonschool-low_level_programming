#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function that prints a structure dog
 * @d: is a dog struct
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d->name == NULL)
	{
		name = "(nil)";
	}
	else
	{
		name = d->name;
	}
	if (d->owner == NULL)
	{
		owner = "(nil)";
	}
	else
	{
		owner = d->owner;
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
