#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	char *mname;
	if (f == NULL)
		return;
	mname = malloc(sizeof(f));
	if (mname == NULL)
		return;
	f(name);
	free(mname);
}
