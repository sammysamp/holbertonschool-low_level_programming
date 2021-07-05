#include "holberton.h"


/**
 * _memcpy - update string with another
 * @dest: destination string
 * @src: source string
 * @n: size of source string to take in count
 *
 * Return: New string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}



