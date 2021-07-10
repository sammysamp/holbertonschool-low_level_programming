#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the program
 * @argc: int length of array argv
 * @argv: array or element of a list
 *
 * Return: EXIT
 */
int main(int argc, char **argv)
{
	if (!*argv)
		exit(EXIT_FAILURE);
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
