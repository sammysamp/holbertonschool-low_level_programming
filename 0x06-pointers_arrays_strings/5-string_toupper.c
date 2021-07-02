#include <stdio.h>

/**
 * string_toupper - change all tu upper case
 * @n: original string
 *
 * Return: string changed
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
