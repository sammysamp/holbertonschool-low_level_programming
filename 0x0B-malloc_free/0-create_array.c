#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create an array anf fill it
 * @size: size of the array to create
 * @c: char to fill
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;
	char *s;

	if (size == 0)
		return (0);
	i = 0;
	ar = malloc(sizeof(*ar) * size);
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
