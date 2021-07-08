#include "holberton.h"
/**
 * find_prime - check is a number is prime
 * @n: number to evaluate
 * @i: int to increase
 *
 * Return: 1 if is prime
 */
int find_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime(n, i + 1));
}

/**
 * is_prime_number - original function
 * @n: number to check
 *
 * Return: 1 if is prime
 * 0 is not
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
