#include "holberton.h"
#include <stddef.h>
/**
 * _strpbrk - check ocurrences of chars from accept in s
 * @s: string where to look for
 * @accept: string with chars to check in s
 *
 * Return: pointer of the first ocurrence of character of accept
 * on s
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while ((accept[j] != '\0') && (*s != accept[j]))
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			s++;
		}
		else
		{
			break;
		}
	}
	if (*s == '\0')
	{
		return NULL;
	}	
	else
	{
		return (s);
	}	
}



