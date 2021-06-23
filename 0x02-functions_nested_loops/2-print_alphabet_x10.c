#include <stdio.h>
/**
 *print_alphabet_x10 - Print the alphabet x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i < 11; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			printf("%c", c);
			c++;
		}
		printf("\n");
	}
}


