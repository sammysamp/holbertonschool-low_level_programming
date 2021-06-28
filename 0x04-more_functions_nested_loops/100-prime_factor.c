#include <stdio.h>
/**
 * _esdivisible - check if a number is divisible by the other number
 * @num: first number
 * @i: second number
 * Return: 1 if is success
 */
int _esdivisible(int num, int i)
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
int _esprimo(int i)
{
	int cont;

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
void main(void)
{
	int num = 612852475143;
	int i, esdivisible, esprimo;
	int higher = 1;

	for (i = 2; i < num; i++)
	{
		esdivisible = _esdivisible(num, i);
		esprimo = _esprimo(i);
		if (esdivisible && esprimo)
			higher = i;
	}
	printf("%d\n", higher);
}
