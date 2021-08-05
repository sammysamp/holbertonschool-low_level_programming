#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - convert bynary to unsigned int
 * @b: binary string
 * Return: unsigned int resulted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < strlen(b); i++)
	{
		result <<= 1;
		if (b[i] == '1')
		{
			result += 1;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (result);
}
