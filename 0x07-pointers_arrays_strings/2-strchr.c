#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - find char on a string
 * @s: string where to look for
 * @c: character to look forl
 *
 * Return: pointer of the first occurrence
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (0);
}



