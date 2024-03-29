#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a functiom that prints a name.
 *
 * @name: the name.
 * @f: a pointer to the function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
