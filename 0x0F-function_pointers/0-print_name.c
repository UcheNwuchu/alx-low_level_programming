#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -A function that  prints a name
 * @name: name to be printed
 * @f: pointer to the printed function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
