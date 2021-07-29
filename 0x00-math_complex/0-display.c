#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - display complex number
 * @c: complex number to display
 * Return: nothing
 */
void display_complex_number(complex c)
{
	if (c.im < 0)
		printf("%.0f - %.0fi\n", c.re, (-1) * c.im);
	else
		if (c.im == 0)
			printf("%.0f\n", c.re);
		else
			printf("%.0f + %.0fi\n", c.re, c.im);
}
