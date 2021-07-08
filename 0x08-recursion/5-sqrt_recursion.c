#include "holberton.h"
/**
 * find_square - check recursively the root square
 * @x: base
 * @y: potence
 *
 * Return: natural root square
 */
int find_square(int x, int y)
{
	int square = y * y;

	if (square > x)
	{
		return (-1);
	}
	else
	{
		if (square == x)
			return (y);
		else
			return (find_square(x, y + 1));
	}
}

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
	return (find_square(n, 1));
}
