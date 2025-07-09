#include"dog.h"
/**
 * init_dog - Initialize a variable type
 * @d: is a dog
 * @name: is name dog
 * @age: is age dog
 * @owner: is owner dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
