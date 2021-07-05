#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - fill values on the array
 * @s: original memory representation
 * @b: character to print on memory
 * @n: the size of the memory to fill
 *
 * Return: New print of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}



