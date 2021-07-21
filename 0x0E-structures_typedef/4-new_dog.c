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
	int i, j, k, m;
	char *bname;
	char *bowner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		exit(98);
	d->name = name;
	d->age = age;
	d->owner = owner;
	i = 0;
	while (name[i])
		i++;
	bname = malloc(sizeof(char) * i);
	if (bname == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		bname[j] = name[j];
	k = 0;
	bowner = malloc(sizeof(char) * k);
	if (bowner == NULL)
		return (NULL);
	for (m = 0; m < k; m++)
		bowner[m] = owner[m];
	return (d);
}
