#include <stdio.h>
#include <ctype.h>
/**
 * _islower - convert everything to lower case
 * @c: integer value to convert
 *
 * Return: 1 on success
 *
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
