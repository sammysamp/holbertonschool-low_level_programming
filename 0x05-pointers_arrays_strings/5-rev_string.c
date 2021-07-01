#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - update string in reverse
 * @s: pointer of the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len;
	int i;
	char t[200];

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = 0; i < len; i++)
	{
		*(t + i) = *(s - i);
	}
	s = s + 1 - len;
	for (i = 0; i < len; i++)
	{
		*(s + i) = *(t + i);
	}
}
