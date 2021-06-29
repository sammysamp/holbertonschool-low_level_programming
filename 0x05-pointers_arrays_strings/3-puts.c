#include <stdio.h>

/**
 * _strlen - return the lenth of the string
 * @s: pointer of tne string
 *
 * Return: the lengh in integer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
