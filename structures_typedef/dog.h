#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - definite a new type
 * @name: is a name dog
 * @age: is age dog
 * @owner: is a owner dog
 * Return: void
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
