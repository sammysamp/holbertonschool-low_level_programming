#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - convert unsigned int to bin
 * @n: number tu convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	int flag = 0;

	if (n == 0)
		printf("0");
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag == 1)
				printf("0");
		}
		else
		{
			flag = 1;
			printf("1");
		}
		mask = mask >> 1;
	}
}
