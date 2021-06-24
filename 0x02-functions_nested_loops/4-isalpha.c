#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - check if is alpha
 * @c: integer value to convert
 *
 * Return: 1 on success
 *
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
