#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenate 2 string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int j;
	int k;

	j = 0;
	k = 0;
	while (s1[j])
		j++;
	while (s2[k])
		k++;
	i = 0;
	ar = malloc(sizeof(*ar) * (j + 1 + k + 1));
	if (ar == NULL)
		return (NULL);
	while (i < j)
	{
		ar[i] = s1[i];
		i++;
	}
	while (i <= j + k)
	{
		ar[i] = s2[i - j];
		i++;
	}
	return (ar);
}
