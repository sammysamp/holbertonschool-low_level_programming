#include "holberton.h"
/**
 * _sqrt_recursion - calculate the natural sqrt root
 * of a number
 * @n: number to power the first number
 *
 * Return: natural sqrt root of number
 * -1 is not a natural sqrt root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	while (i * i <= n)
		i++;
	if ((i - 1) * (i - 1) == n)
		return (i - 1);
	else
		return (-1);
}

