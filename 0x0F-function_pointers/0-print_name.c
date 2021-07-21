#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	char *mname;

	mname = malloc(sizeof(f));
	if (mname == NULL)
		return;
	f(name);
	free(mname);
}
