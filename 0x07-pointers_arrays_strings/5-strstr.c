#include <stdio.h>
/**
 * _strstr - finds the first ocurrence of string
 * on other string
 * @haystack: string to look for
 * @needle: string to find
 *
 * Return: string found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j]
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}
