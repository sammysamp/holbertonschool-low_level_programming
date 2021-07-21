#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		exit(98);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
