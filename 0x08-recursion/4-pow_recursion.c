#include "holberton.h"
/**
 * _pow_recursion - raise first number to the power of
 * second one
 * @x: number to be raised
 * @y: number to power the first number
 *
 * Return: result of powering
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
