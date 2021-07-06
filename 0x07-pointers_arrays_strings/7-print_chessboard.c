#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, column = 0;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
