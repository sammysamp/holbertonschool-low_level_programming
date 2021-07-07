#include <stdio.h>
/**
 * print_diagsums - sum the values of matrix diagonals
 * @a: pointer of matrix
 * @size: size of square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[(size + 1) * i];
		sum1 += a[(size - 1) * (i + 1)]
	}
	printf("%d, %d\n", sum, sum1);
}
