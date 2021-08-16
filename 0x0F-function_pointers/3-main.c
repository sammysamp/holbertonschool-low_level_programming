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
		printf("Faltan argumentos\n");
		return (99);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("El resultado es \n");
	printf("%d\n", result);
	return (result);
}

