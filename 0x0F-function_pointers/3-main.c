#include <stdio.h>
#include "3-calc.h"
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
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((!(*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '*' ||
				*argv[2] == '/' || *argv[2] == '%')) ||
			*(argv[2] + 1) != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if (argv[3] == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (result);
}

