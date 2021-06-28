#include "holberton.h"
/**
 * swap_int - changes the values between two variables
 * @a: first variable
 * @b: second variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
