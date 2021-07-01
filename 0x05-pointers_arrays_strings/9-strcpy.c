#include <stdio.h>
#include "holberton.h"

/**
 * _strcpy - copy a string to another
 * @dest: pointer of the destination array
 * @src: pointer of the source array
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}	
	return (dest);
}
