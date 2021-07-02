#include "holberton.h"
#include <stddef.h>

/**
 * _strncpy - rewrite one string with another with max n on source string
 * @dest: main string
 * @src: second string
 * @n: max number of chars of second string
 *
 * Return: string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
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
	if (n < is)
	{
		for (i = 0; i <= n - 1; i++)
		{
			dest[i] = src[i];
		}
	} else
	{	
		for (i = 0; i < is; i++)
		{
			dest[i] = src[i];
		}
		for (i = is; i < n; i++)
		{
			dest[i] = 0;	
		}
	}	


	return (dest);
}
