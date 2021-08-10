#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set 0 to a diven an index
 * @n: n
 * @index: index
 * Return: value of bit of given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned long int n_val = 1;

	if (index > 63)
		return (-1);
	n_val = (n_val << index);
	if (num & n_val)
		num -= n_val;
	*n = num;
	return (1);
}
