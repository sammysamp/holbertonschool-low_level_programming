#include <stdio.h>
#include "dog.h"

/**
 * init_dog - init dog structure.
 * @d: struct
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
