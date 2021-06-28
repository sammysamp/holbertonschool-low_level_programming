#include <stdio.h>
/**
 * _esdivisible - check if a number is divisible by the other number
 * @num: first number
 * @i: second number
 * Return: 1 if is success
 */
int _esdivisible(long int num, long int i)
{
	if (num % i == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _esprimo - check is number is prime
 * @i: number to check
 * Return: 1 if is success
 */
int _esprimo(long int i)
{
	long int cont;

	for (cont = 2; cont < i; cont++)
	{
		if (i % cont == 0)
		return (0);
	}
	return (1);
}

/**
 * main - check the two conditions
 *
 * Return: nothing
 */
int main(void)
{
	long int num = 612852475143;
	long int i, esdivisible, esprimo;
	long int higher = 1;

	for (i = 2; i < num; i++)
	{
		esdivisible = _esdivisible(num, i);
		esprimo = _esprimo(i);
		if (esdivisible && esprimo)
			higher = i;
	}
	printf("%ld\n", higher);
	return (1);
}
