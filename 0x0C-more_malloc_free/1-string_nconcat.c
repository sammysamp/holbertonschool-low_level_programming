#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: first string
 * @s2: second string
 * @n: max size s2 could have
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, k;

	j = 0;
	k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j])
		j++;
	while (s2[k])
		k++;
	i = 0;
	if (k > n)
	{
		k = n;
	}
	ar = calloc((j + k + 1), sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (i < j)
	{
		ar[i] = *(s1 + i);
		i++;
	}
	while (i < j + k)
	{
		ar[i] = *(s2 + i - j);
		i++;
	}
	return (ar);
}
