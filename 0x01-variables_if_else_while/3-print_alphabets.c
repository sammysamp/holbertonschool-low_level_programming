#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: respuesta
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
		putchar (n);
	for (n = 65; n < 91; n++)
		putchar (n);
	putchar ('\n');
	return (0);
}

