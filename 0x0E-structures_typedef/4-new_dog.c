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
	int i = 0, j, k = 0, m;
	char *bname, *bowner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	while (name[i])
		i++;
	bname = malloc(sizeof(char) * i + 1);
	if (bname == NULL)
	{
		free(bname);
		free(d);
		return (NULL);
	}
	for (j = 0; j <= i; j++)
		bname[j] = name[j];
	while (owner[k])
		k++;
	bowner = malloc(sizeof(char) * k + 1);
	if (bowner == NULL)
	{
		free(bname);
		free(bowner);
		free(d);
		return (NULL);
	}
	for (m = 0; m <= k; m++)
		bowner[m] = owner[m];
	d->name = bname;
	d->age = age;
	d->owner = bowner;
	return (d);
}
