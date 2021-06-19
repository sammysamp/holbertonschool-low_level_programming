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

	for (n = 48; n < 58; n++)
		putchar (n);
	for (n = 97; n < 103; n++)
		putchar (n);
	putchar ('\n');
	return (0);
}

