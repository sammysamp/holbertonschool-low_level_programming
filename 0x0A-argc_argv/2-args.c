#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the program
 * @argc: int length of array argv
 * @argv: array or element of a list
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (!argc)
		exit(EXIT_FAILURE);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
