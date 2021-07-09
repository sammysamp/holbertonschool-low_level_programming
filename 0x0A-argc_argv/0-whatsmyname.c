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
	if (argc < 0)
		exit(EXIT_FAILURE);
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
