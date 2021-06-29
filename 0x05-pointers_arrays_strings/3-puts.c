#include <stdio.h>

/**
 * _puts - print string char by char
 * @str: pointer of tne string
 *
 * Return: nothing
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
