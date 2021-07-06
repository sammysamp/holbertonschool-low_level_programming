#include "holberton.h"

/**
 * _strspn - check ocurrences of chars from accept in s
 * @s: string where to look for
 * @accept: string with chars to check in s
 *
 * Return: number of bytes of s that fulfill the condition
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int contador;

	i = 0;
	contador = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else
			{
				contador++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (contador);
}



