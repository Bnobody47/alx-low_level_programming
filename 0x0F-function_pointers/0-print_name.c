#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name: Characters name
 * @f: Function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
