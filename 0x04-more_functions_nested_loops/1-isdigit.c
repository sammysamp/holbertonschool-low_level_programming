#include <stdio.h>

/**
 * _isdigit - check if is digit
 * @c: char to evaluate
 *
 * Return: 1 if is success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
