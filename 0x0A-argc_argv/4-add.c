#include <stdio.h>
#include <stdlib.h>
/**
 * check - check if is number
 * @buff: string to evaluate
 *
 * Return: 0
 */
int check(char *buff)
{
	int s;

	if (buff == 0)
		return (-1);
	s = atoi(buff);
	if (s)
	{
		return (s);
	}
	else
	{
		return (s);
	}
}

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
	int res;
	int sum;

	i = 1;
	res = 0;
	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	while (i < argc)
	{
		res = check(argv[i]);
		if (res == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum = sum + res;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
