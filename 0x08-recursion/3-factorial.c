#include "holberton.h"
/**
 * factorial - calculate factorial of given number
 * @n: number to calculate factorial
 *
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
