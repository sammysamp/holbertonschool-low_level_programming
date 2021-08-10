#include <stdio.h>
#include "main.h"
/**
 * get_bit - return bit diven an index
 * @n: n
 * @index: index
 * Return: value of bit of given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bin_max = sizeof(n) * 8;

	if (index > bin_max)
		return (-1);
	return ((n >> index) & 1);
}
