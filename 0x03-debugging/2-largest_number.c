#include "holberton.h"
/**
 * largest_number - function
 * @a: first int
 * @b: second int
 * @c: third int
 *
 * Return: largest
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && a > c) || (a == b && a > c) || (a == c && a > b))
	{
		largest = a;
	}
	else if ((b > a && b > c) || (b == a && b > c) || (b == c && b > a))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
