#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy a string on other portion of memory
 * @str: string to copy
 *
 * Return: pointer to array
 */
char *_strdup(char *str)
{
	char *ar;
	int i;
	int j;

	if (str == NULL || *str == '\0')
		return (NULL);
	j = 0;
	while (str[j])
		j++;
	i = 0;
	ar = malloc(sizeof(*ar) * j - 1);
	if (ar == NULL)
		return (NULL);
	while (i < j)
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
