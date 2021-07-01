#include "holberton.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: main string
 * @src: second string
 *
 * Return: string concatenated
 */
char *_strcat(char *dest, char *src)
{
	int is;
	int id;
	int i;

	is = 0;
	id = 0;
	while (src[is] != '\0')
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
