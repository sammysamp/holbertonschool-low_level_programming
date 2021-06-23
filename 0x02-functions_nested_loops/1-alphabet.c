#include <stdio.h>
/**
 *print_alphabet - Print the alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		printf("%c", c);
		c++;
	}
	printf("\n");
}


