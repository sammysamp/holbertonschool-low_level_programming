#include <stdio.h>

/**
 * _strlen - return the lenth of the string
 * @s: pointer of tne string
 *
 * Return: the lengh in integer
 */
int _strlen(char *s)
{
	int m;
		
	m = 0;
	while (*s != '\0')
	{
		s++;
		m++;
	}
	return (m);
}
