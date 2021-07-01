#include "holberton.h"

/**
 * _strncat - concatenate 2 strings with max n on source string
 * @dest: main string
 * @src: second string
 * @n: max number of chars of second string
 *
 * Return: string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int is;
	int id;
	int i;

	is = 0;
	id = 0;
	while (src[is] != '\0' && is < n - 1)
	{
		is++;
	}

	while (dest[id] != '\0')
	{
		id++;
	}

	for (i = 0; i <= is; i++)
	{
		dest[id + i] = src[i];
	}
	return (dest);
}
