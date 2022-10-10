#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: A pointer to the struct dog
 * @name: Type String Name
 * @age: Type float Age
 * @owner: Type String Owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
