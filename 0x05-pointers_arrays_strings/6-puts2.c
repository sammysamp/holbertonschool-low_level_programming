#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - print not even character position of string
 * @str: pointer of the string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
