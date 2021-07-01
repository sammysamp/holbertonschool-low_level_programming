#include <stdio.h>
#include "holberton.h"

/**
 * puts_half - print the las half part of string
 * @str: pointer of the string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int i;
	int j;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;
	if (len % 2 == 0)
	{
		j = len / 2;
	}
	else
	{
		j = len / 2 + 1;
	}
	for (i = j; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
