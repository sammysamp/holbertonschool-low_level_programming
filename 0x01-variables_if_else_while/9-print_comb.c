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
	{
		putchar (n);
		if (n != 57)
		{
			putchar (44);
			putchar (32);
		}
	}
	putchar('\n');
	return (0);

}

