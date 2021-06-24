#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - check if given char is upper case
 * @c: integer ascii value to check
 *
 * Return: 1 on success
 *
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
