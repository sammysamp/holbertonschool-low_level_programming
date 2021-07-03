#include <stdio.h>

/**
 * cap_string - capitalize a string
 * @n: original string
 *
 * Return: string changed
 */

char *cap_string(char *n)
{
	int i;
	int temp;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122 && i == 0)
		{
			n[i] = n[i] - 32;
		}
		else
		{
			if (n[i] >= 97 && n[i] <= 122 && (temp == 44 || temp == 59
|| temp == 46 || temp == 33 || temp == 63 || temp == 32 || temp == 9 || temp == 10
|| temp == 34 || temp == 40 || temp == 41 || temp == 123 || temp == 125))
			n[i] = n[i] - 32;
		}
		temp = n[i];
		i++;
	}
	return (n);
}
