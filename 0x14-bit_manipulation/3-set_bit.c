#include <stdio.h>
#include "main.h"
/**
 * set_bit - set 1 to a diven an index
 * @n: n
 * @index: index
 * Return: value of bit of given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num = *n;
	unsigned long int n_val = 1;

	if (index > 63)
		return (-1);
	n_val = (n_val << index);
	num += n_val;
	*n = num;
	return (1);
}
