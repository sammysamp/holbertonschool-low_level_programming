#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct members
 * @d: struct pointer
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

