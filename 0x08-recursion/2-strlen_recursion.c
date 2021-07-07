#include "holberton.h"
/**
 * _strlen_recursion - calculate the length of a string
 * @s: string to evluate
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
